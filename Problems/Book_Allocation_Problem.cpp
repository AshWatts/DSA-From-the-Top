#include<iostream>
#include<climits>
using namespace std;

bool is_valid(int arr[], int n, int m, int mid) {
    int student = 1;
    int pages = 0;

    for(int i=0;i<n;i++) {

        if(arr[i] > mid) {
            return false;
        }

        if(pages + arr[i] <= mid) {
            pages += arr[i];
        }
        else {
            student++;
            pages = arr[i];
        }
    }

    if(student > m) {
        return false;
    }
    else {
        return true;
    }
}

int book_allocation(int arr[], int n, int m) {

    if(m > n){
        return -1;
    }

    int ans = -1;
    int start = 0;
    int end = 0;
    for(int i=0;i<n;i++) {
        start = max(start, arr[i]);
        end += arr[i];
    }

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(is_valid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    }
    
    return ans;
}

int main() {
    int arr[] = {15, 17, 20};
    int n = 3;
    int m = 2;

    cout<<book_allocation(arr, n, m)<<endl;
    return 0;
}
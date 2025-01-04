#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int start, int end, int mid) {
    vector<int> temp;
    int i = start;
    int j = mid+1;

    while(i<=mid && j<=end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while(i<=mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end) {
       temp.push_back(arr[j]);
       j++; 
    }

    for(int idx=0; idx<temp.size(); idx++) {
        arr[idx + start] = temp[idx];
    }
}

void mergesort(vector<int> &arr, int start, int end) {

    if(start < end) {
        int mid;
        mid = start + (end - start) / 2;

        mergesort(arr, start, mid);
        mergesort(arr, mid+1, end);

        merge(arr, start, end, mid);
    }

    return;
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    mergesort(arr, 0, arr.size()-1);

    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
    int index = start-1;
    int pivot = arr[end];

    for(int j=start; j<end; j++) {
        if(arr[j] <= pivot) {                               // For descending order, change <= to >
            index++; 
            swap(arr[j], arr[index]);
        }
    }

    index++;
    swap(arr[index], arr[end]);

    return index;
}

void quicksort(vector<int> &arr, int start, int end) {
    if(start<end) {
        int piv_index;
        piv_index = partition(arr, start, end);
        quicksort(arr, start, piv_index - 1);
        quicksort(arr, piv_index + 1, end);
    }
}
 
int main() {                                                 // Time Complexity: O(nlogn) in average case, O(n^2) in worst case (when pivot is smallest or largest element)
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    quicksort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
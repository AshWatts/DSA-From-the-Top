#include<iostream>
#include<vector>
using namespace std;


// int maxArea(vector<int>& height) {                                      Brute Force
//     int n = height.size();
//     int max_area = 0;

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             max_area = max(min(height[i], height[j]) * (j-i), max_area);
//         }
//     }
//     return max_area;
// }

int maxArea(vector<int>& height) {
    int n = height.size();
    int max_area = 0;
    int i=0,j=n-1;

    while(i<j){
        max_area = max(max_area, (j-i) * min(height[i], height[j]));
        // if(height[i]<height[j]){
        //     i++;
        // }
        // else{
        //     j--;
        // }
        height[i] < height[j] ? i++ : j--;
    }

    return max_area;
}



int main() {
    vector<int> height1 = {1,8,6,2,5,4,8,3,7};
    cout << "Test Case 1: " << maxArea(height1) << endl;

    vector<int> height2 = {1,1};
    cout << "Test Case 2: " << maxArea(height2) << endl;

    vector<int> height3 = {4,3,2,1,4};
    cout << "Test Case 3: " << maxArea(height3) << endl;

    vector<int> height4 = {1,2,1};
    cout << "Test Case 4: " << maxArea(height4) << endl;

    return 0;
}
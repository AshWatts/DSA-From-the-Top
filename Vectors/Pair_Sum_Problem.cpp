#include<iostream>
#include<vector>
using namespace std;

// vector<int> pair_sum(vector<int> v,int k){                BRUTE FORCE
//     vector<int> ans;
//     for(int i=0;i<v.size()-1;i++){
//         for(int j=i+1;j<v.size();j++){
//             if(v[i] + v[j] == k){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

vector<int> pair_sum(vector<int> v,int k){
    vector<int> ans;
    int n = v.size();
    int low = 0;
    int high = n-1;

    while(low<high){
        if(v[low] + v[high] == k){
            ans.push_back(low);
            ans.push_back(high);
            return ans;
        }

        else if(v[low] + v[high] > k){
            high--;
        }

        else{
            low++;
        }
    }

    return ans;
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 12;

    cout<<"Pair Sum Problem: "<<endl;
    cout<<"Given Array: ";
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    cout<<"Given Sum: "<<sum<<endl;

    cout<<"Required Pair: ";
    vector<int> result = pair_sum(vec, sum);
    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}
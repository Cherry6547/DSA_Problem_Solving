#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void input(vector<int>&arr){
    int n,temp;
    cout<<"enter no of elements : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<"th element : ";
        cin>>temp;
        arr.push_back(temp);
    }
    return;
}

int Min_Difference(vector<int>&arr){
    int min_diff;
    sort(arr.begin(),arr.end());
    for(int i=1;i<arr.size();i++){
        if((arr[i] - arr[i-1]) < min_diff){
            min_diff = arr[i] - arr[i-1];
        }
    }
    return min_diff;
}


int main(){
    vector<int> arr;
    int min_diff;
    input(arr);
    min_diff = Min_Difference(arr);
    cout<<"Min Difference is : "<<min_diff<<endl;
}
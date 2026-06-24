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

void Print(vector<int>&arr){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

void insert(vector<int>&arr){
    int index,data;
    cout<<"enter data to be inserted : ";
    cin>>data;
    cout<<"enter position to be inserted at : ";
    cin>>index;
    arr.push_back(0);
    for(int i=arr.size()-1;i>index;i--){
        arr[i] = arr[i-1];
    }
    arr[index] = data;
    return;
}


int main(){
    vector<int> arr;
    input(arr);
    cout<<"Before insertion :";
    Print(arr);
    insert(arr);
    cout<<"After insertion : ";
    Print(arr);
}
#include<iostream>
#include<vector>
using namespace std;


void Print(vector<int>&arr){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    vector<int> arr;
    vector<int> copy;
    int n,temp;
    cout<<"Enter no of elements : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"th element : ";
        cin>>temp;
        arr.push_back(temp);
    }
    copy = arr; //copy happens here
    cout<<"arr = ";
    Print(arr);
    cout<<"copy = ";
    Print(copy);
}
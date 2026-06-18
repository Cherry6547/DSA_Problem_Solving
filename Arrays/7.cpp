#include<iostream>
#include<vector>
using namespace std;

void Reverse_Array(vector<int> &arr){
    int i=0,j=arr.size()-1;
    int temp;
    while(i<j){
        temp = arr.at(i);
        arr.at(i) = arr.at(j);
        arr.at(j) = temp;
        i++;
        j--;
    }
    return;
}

void Print(vector<int>&arr){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    vector<int> arr;
    int n,temp;
    cout<<"Enter no of elements : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"th element : ";
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Before Reversing : ";
    Print(arr);
    cout<<"After Reversing : ";
    Reverse_Array(arr);
    Print(arr);
    
    return 0;
}
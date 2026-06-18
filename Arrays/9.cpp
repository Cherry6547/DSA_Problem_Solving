#include<iostream>
#include<vector>
using namespace std;


bool isPresent(vector<int>&arr,int var){
    for(int i:arr){
        if(i==var){
            return true;
        }
    }
    return false;
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

    cout<<"Enter the element to be searched : ";
    cin>>temp;

    if(isPresent(arr,temp)){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    
}
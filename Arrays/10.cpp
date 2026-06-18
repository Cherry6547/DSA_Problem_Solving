#include<iostream>
#include<vector>
using namespace std;


int Count(vector<int>&arr,int var){
    int count = 0;
    for(int i:arr){
        if(i==var){
            count++;
        }
    }
    return count;
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

    cout<<"Enter no to find the frequency : ";
    cin>>temp;
    cout<<"Frequency of the no is : "<<Count(arr,temp)<<endl;
    
}
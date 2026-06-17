#include<iostream>
#include<vector>
using namespace std;

int Max(vector<int>&);

int main(){
    vector<int> arr;
    int max_element,n,temp;
    cout<<"Enter no of elements to enter : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"th element : "<<endl;
        cin>>temp;
        arr.push_back(temp);
    }
    max_element = Max(arr);
    cout<<"Max element is "<<max_element<<endl;
}

int Max(vector<int> &a){
    int m=a.at(0);
    for(int i: a){
        if(i>m){
            m = i;
        }
    }
    return m;
}
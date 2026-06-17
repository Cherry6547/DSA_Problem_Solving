#include<iostream>
#include<vector>
using namespace std;

int Min(vector<int>&);

int main(){
    int min_element,n,temp;
    vector<int> arr;
    cout<<"Enter no of elements : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<"th element : ";
        cin>>temp;
        arr.push_back(temp);
    }
    min_element = Min(arr);
    cout<<"Smallest element is "<<min_element<<endl;
}

int Min(vector<int> &a){
    int m=a.at(0);
    for(int i: a){
        if(i<m){
            m = i;
        }
    }
    return m;
}
#include<iostream>
#include<vector>
using namespace std;


int Sum(vector<int> &arr){
    int sum=0;
    for(int i:arr){
        sum+= i;
    }
    return sum;
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
    cout<<Sum(arr)<<" is the sum of the array"<<endl;
}
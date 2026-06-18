#include<iostream>
#include<vector>
using namespace std;


int Count_Evens(vector<int> &arr){
    int count=0;
    for(int i:arr){
        if(i%2==0){
            count++;
        }
    }
    return count;
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
    cout<<"Total Even numbers in the array are : "<<Count_Evens(arr)<<endl;
}
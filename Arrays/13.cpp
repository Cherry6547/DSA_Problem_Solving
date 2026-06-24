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

int Second_Largest(vector<int>&arr){
    int m1 = INT_MIN,m2;
    m2 = m1;
    for(int i:arr){
        if(i > m1){
            m2 = m1;
            m1 = i;
        }else if((i > m2) && (i < m1)){
            m2 = i;
        }
    }
    return m2;
}


int main(){
    vector<int> arr;
    int second_largest;
    input(arr);
    second_largest = Second_Largest(arr);
    cout<<"Second Largest element in the given array is : "<<second_largest<<endl;
}
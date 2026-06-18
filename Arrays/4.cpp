#include<iostream>
#include<vector>
using namespace std;


float Avg(vector<int> &arr){
    int sum=0;
    float avg=0.0f;
    for(int i:arr){
        sum+= i;
    }

    avg = (float)sum/arr.size();
    return avg;
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
    cout<<Avg(arr)<<" is the avg of the array"<<endl;
}
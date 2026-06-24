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

void Print(vector<int>&arr){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

void delete_element(vector<int>&arr,int element){
    bool flag = false;
    int index = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==element){
            index = i;
            flag = true;
            break;
        }
    }
    if(flag){
        for(int i= index;i<arr.size()-1;i++){
            arr[i] = arr[i+1];
        }
        arr.pop_back();
        Print(arr);
    }else{
        cout<<"element not found , OOPS ";
    }
    
}


int main(){
    vector<int> arr;
    int element;
    input(arr);
    cout<<"enter the element to be deleted : ";
    cin>>element;
    delete_element(arr,element);
}
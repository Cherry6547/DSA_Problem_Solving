#include<iostream>
#include<vector>
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

int Max_Difference(vector<int>&arr){
    int max= arr[0],min = arr[0],temp;
    for(int i: arr){
        if(i>max){
            max = i;
        }
        if(i<min){
            min = i;
        }
    }
    if(max<0){
        temp = min - max;
        (temp<0)?(temp = -temp):(temp);
        return temp;
    }
    return max - min;
}


int main(){
    vector<int> arr;
    int max_diff;
    input(arr);
    max_diff = Max_Difference(arr);
    cout<<"Max Difference is : "<<max_diff<<endl;
}
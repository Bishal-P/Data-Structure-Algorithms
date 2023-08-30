#include<iostream>

using namespace std;

int main(){
    int arr[4]={0,2,5,1};
    int start=0,end=3;
    int ans=-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    cout<<"The peak element is :"<<start<<endl;
}
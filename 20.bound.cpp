#include<iostream>
using namespace std;

int leftBound(int arr[],int size,int key){
    int start=0,end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
    }
    return ans;
}


int rightBound(int arr[],int size,int key){
    int start=0,end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
    }
    return ans;
}


int main(){
    int arr[13]={1,2,3,3,3,3,3,3,3,5,6,7,9};
    cout<<"The start index is :"<<leftBound(arr,13,3)<<endl;
    cout<<"The start index is :"<<rightBound(arr,13,3)<<endl;
}


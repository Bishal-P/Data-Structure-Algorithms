#include<iostream>
using namespace std;

int main(){

    int arr[8]={1,0,0,0,1,1,0,0};
    int start=0,end=7,temp;
    while(start<end){
        if(arr[start]=arr[end]){
            while(start<end){
                if(arr[start]<arr[end]){
                    // start++;
                    break;
                }
                start++;
            }
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
        else{
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr[i];
    }
}
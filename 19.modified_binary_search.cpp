#include<iostream>

using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0,end=size-1;
    while(start<=end){
       int  mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}



int main(){
    int arr[5]={1,4,8,26,99};
    int index=binarySearch(arr,5,99);
    cout<<"The index of the 99 is :"<<index<<endl;

}
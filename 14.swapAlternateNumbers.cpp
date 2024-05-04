#include<iostream>

using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int temp;
    for (int i=1;i<5;i+=2){
        temp=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
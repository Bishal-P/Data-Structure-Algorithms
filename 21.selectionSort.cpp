#include<iostream>

using namespace std;

int main(){
    int arr[5]={8,6,4,88,44};
    for(int i=0;i<5-1;i++){
        int minIndex=i;
        for(int j=i+1;j<=4;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }

    cout<<"The sorted array is :";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}
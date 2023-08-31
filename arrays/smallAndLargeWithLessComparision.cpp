#include<iostream>
using namespace std;

void smallLarge(int arr[],int len,int *maxMin){
    int max,min;
    if(len==1){
        max=min=arr[0];
    }
    else{
        if(arr[0]>arr[1]){
            max=arr[0];
            min=arr[1];
        }
        else{
            max=arr[1];
            min=arr[0];
        }
        int oddEven=1;
        if(len%2==0){
            oddEven=2;
        }
        for(int i=oddEven;i<len;i=i+2)
        {
            cout<<arr[i]<<" "<<arr[i+1]<<endl;
            if(arr[i]>arr[i+1]){
                if(arr[i]>max){
                    max=arr[i];
                }
                if(arr[i+1]<min){
                    min=arr[i+1];
                }
            }
            else{
                if(arr[i+1]>max){
                    max=arr[i+1];
                }
                if(arr[i]<min){
                    min=arr[i];
                }
            }
        }
    }
    maxMin[0]=max;
    maxMin[1]=min;
}


int main(){
    int arr[]={34,45,76,3,23,10,999};
    int maxMin[2];
    int len=sizeof(arr)/sizeof(arr[0]);
    // cout<<"The size is :"<<len<<endl;
    smallLarge(arr,len,maxMin);
    cout<<"The max element is :"<<maxMin[0]<<endl;
    cout<<"The min element is "<<maxMin[1]<<endl;
    
}
#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,4,3,5,2,6,4};
    int ans=0;
    for(int i=0;i<7;i++){
        ans^=arr[i];
    }
    for(int i=1;i<7;i++){
        ans^=i;
    }
    cout<<"The unique elements is :"<<ans;
}
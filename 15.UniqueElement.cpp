#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,1,2,2,3};
    int ans=0;
    for(int i=0;i<5;i++){
        ans^=arr[i];
    }
    cout<<"The unique element is :"<<ans;
}
#include<iostream>
using namespace std;

int main(){
    int num=64;
    int test=1,flag=1;
    while(test<=num){
        if(test==num){
            flag=0;
            break;
        }
        test=test<<1;
    }
    if(flag)
        cout<<"Not a power of two"<<endl;
    else
        cout<<"The number is a power of two"<<endl;
}
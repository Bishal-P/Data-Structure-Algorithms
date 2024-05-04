#include<iostream>
using namespace std;

int main(){
    // int num=64;
    // int test=1,flag=1;
    // while(test<=num){
    //     if(test==num){
    //         flag=0;
    //         break;
    //     }
    //     test=test<<1;
    // }
    // if(flag)
    //     cout<<"Not a power of two"<<endl;
    // else
    //     cout<<"The number is a power of two"<<endl;

    int num2;
    cout<<"Enter the number :";
    cin>>num2;
    int count=0;
    int and1=0;
    while (num2!=0){
        and1=num2&1;
        if(and1==1){
            count++;
        }
        num2=num2>>1;
    }
    string output=count==1?"Yes it is a power of 2":"Not a power of 2";
    cout<<output<<endl;
}
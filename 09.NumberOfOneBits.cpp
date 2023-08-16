#include<iostream>
using namespace std;

int main(){

    int num=5,count=0;
    while(num>0){
        int rem=num&1;
        if(rem)
            count++;
        num=num>>1;
    }
    cout<<"The number of one bits are :"<<count;
}
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int num=10,i=0,num2=10,bin=0;
    while(num>0){
        int rem=num%2;
        bin=rem*pow(10,i)+bin;
        num/=2;
        i++;
    }
    cout<<"The binary is :"<<bin<<endl;

    //Using another method

    bin=0;
    i=0;
    while(num2!=0){
        int bit=num2&1;
        bin=bit*pow(10,i)+bin;
        num2=num2>>1;
        i++;
    }
    cout<<"Using Another method :"<<bin<<endl;
    return 0;
}
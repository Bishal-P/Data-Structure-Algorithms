#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int num=5;
    int binary=0;
    while(num>0){
        int rem=num&1;
        binary=rem*pow(10,i)+binary;
        num=num/2;
    }
    
    cout<<"The binay number is "<<binary<<endl;
}
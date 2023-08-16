#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int num=8;
  int mask=0,m=num;
  while(num>0){
    num=num>>1;
    mask=mask<<1;
    mask=mask|1;
  }
    num=(~m)&mask;
    cout<<num;
}
#include<iostream>

using namespace std;

int main(){
    unsigned int n;
    cout<<"Enter the number :";
    cin>>n;
    int numberOfBits=0;
    while(n>0){
        if(n&1==1){
            numberOfBits++;
        }
        n=n>>1;
    }
    cout<<"The number of one bits are :"<<numberOfBits<<endl;
}
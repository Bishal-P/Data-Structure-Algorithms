#include<iostream>

using namespace std;

int main(){

    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<10-2;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
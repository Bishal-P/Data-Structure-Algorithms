#include<iostream>
using namespace std;


void fibo(int first,int second,int next,int terms){
    if(terms==0)
        return;
    cout<<first<<endl;
    next=first+second;
    first=second;
    second=next;
    fibo(first,second,next,--terms);
}


int main(){
    int num;
    cout<<"Enter the number of terms : ";
    cin>>num;
    
    fibo(0,1,0,num);
}
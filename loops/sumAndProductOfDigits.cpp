#include<iostream>

using namespace std;

int main(){

    int n,sum=0,prod=1;
    cout<<"Enter the number :";
    cin>>n;

    while(n>0){
        int rem=n%10;
        sum+=rem;
        prod*=rem;
        n/=10;
    }
    cout<<"Result ="<<prod-sum<<endl;

}
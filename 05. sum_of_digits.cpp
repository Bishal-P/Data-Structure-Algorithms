#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int sum=0,product=1;
    while(n>0){
        int rem=n%10;
        sum+=rem;
        product*=rem;
        n/=10;
    }
    cout<<"The difference of product and sum is :"<<(product-sum)<<endl;
    return 0;
}

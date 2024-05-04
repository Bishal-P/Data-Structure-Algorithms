#include<iostream>
using namespace std;

int fact(int num){
    int factorial=1;
    for(int i=1;i<=num;i++){
        factorial*=i;
    }
    return factorial;
}

void pascal(int pas){
    for(int i=0;i<pas;i++){
        for(int j=0;j<=i;j++){
            cout<<(fact(i)/(fact(i-j)*fact(j)))<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int ran;
    cout<<"Enter the range : ";
    cin>>ran;
    pascal(ran);
    pascal(7);
}











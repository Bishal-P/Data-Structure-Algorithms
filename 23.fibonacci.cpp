#include<iostream>
using namespace std;

void fibo(int ran){
    int first=0,second=1,next;
    for(int i=1;i<=ran;i++){
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }
    cout<<endl;
}

int main(){
    fibo(10);
    cout<<"end of first"<<endl<<endl;
    fibo(7);

}

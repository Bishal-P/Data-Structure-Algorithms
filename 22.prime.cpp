#include<iostream>

#include<math.h>

using namespace std;


bool prime(int num){
    if(num<2){
        return false;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cin>>num;
    cout<<prime(num);
    return 0;
}
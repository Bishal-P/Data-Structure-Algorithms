#include<iostream>

using namespace std;

int fact(int num){
    if(num==1){
        return 1;
    }
    num*=fact(num-1);
    return num;
}

int main(){
    cout<<fact(5);
}



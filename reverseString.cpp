#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="hello";
    string rev="";
    for(int i=str.length()-1;i>=0;i--){
        rev+=str[i];
    }
    cout<<"The reverse of the string is :"<<rev<<endl;

}
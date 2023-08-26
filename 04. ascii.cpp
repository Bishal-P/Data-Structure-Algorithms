#include<iostream>
using namespace std;
int main(){
     int ch;
     cout<<"Enter the character :";
     ch=cin.get();
     cout<<"The value of ch is :"<<ch<<endl;
     if(ch>=48 && ch<=57){
        cout<<"The character is numeric\n";
     }
     else if (ch>=65 && ch<=90){
        cout<<"The character is uppercase\n";        
     }
     else if (ch>=97 && ch<=122)
     {
        cout<<"The character is lowercase\n";
     }
     else{
        cout<<"The character is a special character\n";
     }
     return 0;  
}

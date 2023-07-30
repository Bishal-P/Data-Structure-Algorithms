#include<iostream>
using namespace std;

int main(){
    int row=5,column=4;

    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(j==0 || j==column-1){
                cout<<"* ";
            }
            else{
                if(i==0 || i==row-1){
                    cout<<"* ";
                }
                else{
                cout<<"  ";
                }
            }
           
        }
        cout<<endl;
    }

    // return 0;

    cout<<endl;
    for(int i=0;i<5;i++){
        for(int j=5-i;j>=0;j--){
            cout<<"  ";  
        }
         for(int k=0;k<=i;k++){
                cout<<"* ";
            }
        cout<<endl;
    }
}


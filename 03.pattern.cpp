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

    cout<<endl;

    int rows,i=1,currentNumber=1,j;
    cout<<"Enter the number of rows :";
    cin>>rows;
    while(i<=rows){
        j=1;
        while(j<=i){
            cout<<currentNumber<<" ";
            currentNumber++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}


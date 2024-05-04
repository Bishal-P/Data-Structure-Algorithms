#include<stdio.h>

int factorial(int num){
    int product=1;
    for(int i=1;i<=num;i++){
        product*=i;
    }
    return product;
}

void main(){

    int number,original;
    int sum=0;
    int temp;
    printf("Enter a number: ");
    scanf("%d",&number);
    original=number;
    while(number>0){
        temp=number%10;
        sum+=factorial(temp);
        number=number/10;
    }
    
    if(sum==original){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
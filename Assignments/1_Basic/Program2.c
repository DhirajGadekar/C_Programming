/*
 2. Write a program to print the first 100 numbers
*/
#include<stdio.h>

void main(){
    int num1,num2;

    printf("Enter the first Num :");
    scanf(" %d",&num1);

    printf("Enter the Last Num :");
    scanf(" %d",&num2);

    for(int i = num1;i <= num2;i++){
        printf("%d ",i);
    }

}


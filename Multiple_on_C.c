//question ; Take positive integer input and tell if it is a three digit number on not
#include <stdio.h>
int main(){
    int n ;
    printf("Enter a number :  ");
    scanf("%d",&n);
    if (n>99 && n<999) {
        printf("The Number is a 'Three' Digit Number....");
    }
    else{
        printf("The Numner is Not a 'Three' Digit Number....");
    }
}
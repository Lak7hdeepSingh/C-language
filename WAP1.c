//WAP to count digits of a given number 
#include <stdio.h>
int main(){
    int n;
    int count=0;
    printf("enter a Number : ");
    scanf("%d",&n);
    while(n>0){
            n = n/10;
            count++;
        }
    printf("number of Digits : %d",count);
}

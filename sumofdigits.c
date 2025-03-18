//WAP to count digits of a given number 
#include <stdio.h>
int main(){
    int n,ld,s=0;
    int count=0;
    printf("enter a Number : ");
    scanf("%d",&n);
    while(n>0){
            ld = n%10;
            s = s + ld;
            n = n/10;
            count++;
        }
    printf("number of Digits : %d",count);
    printf("\nsum of Digits: %d",s);

}

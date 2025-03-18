#include <stdio.h>
int main(){
    int n,ld,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("The Reverse of %d is : ",n);
    while (n>0){
        ld = n%10;
        sum=ld+sum;
        printf("%d",ld);
        n = n/10;
    }
    printf("\nThe Sum is : %d",sum);
}
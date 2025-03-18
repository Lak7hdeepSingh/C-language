#include <stdio.h>
int main(){
    int n,n2=1;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
    n2 = n2*(i);
    printf("The Factorial of %d is %d \n",i,n2);
    
    }
}
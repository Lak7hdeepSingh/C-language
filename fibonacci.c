
#include <stdio.h>
int main(){
    int n,a = 1,b = 1,sum = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        a = b;
        b = sum;
        sum = a + b;
        printf("The %d Fibonacci number %d \n",i,sum);
    }
}
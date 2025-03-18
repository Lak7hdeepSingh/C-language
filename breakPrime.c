#include <stdio.h>
int main(){
    printf("enter a number to check if its prime or not : \n");
    int n,s=0;
    scanf("%d",&n);
    for (int i = 1; i<=n;i++){
        if (n%i==0){
            printf("The Number is Composite ");
        }
    }
    if (s==2){
        printf("Prime Number");
    }
    else{
        printf("Composite Number");
    }
}
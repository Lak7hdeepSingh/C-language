#include <stdio.h>
int main(){
    float n,a;
    a = 100;
    printf("Enter the value of n ; ");
    scanf("%f",&n);
    for (int i = 1;n>i;i++){
        printf("%f ,",a);
        a = a/2;
    }
}
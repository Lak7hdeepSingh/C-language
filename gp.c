#include <stdio.h>
int main(){
    int n;
    printf("Enter a number ; ");
    scanf("%d",&n);
    int b = 3;
    for (int i=1;i<=n;i++){
        printf("%d ",b);
        b = b * 4;
    }
}
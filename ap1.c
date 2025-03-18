#include <stdio.h>
int main(){
    int n;
    printf("Enter a number ;");
    scanf("%d",&n);
    int f = 1;
    for (int i = 1 ; i<=n ; i++){
        f = f+3;
        printf("%d ",f);
    }
}
#include <stdio.h>
int main(){
    int n,a=65;
    printf("Enter a number ;");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        a = 65;
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            char ch = (char)a;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
}
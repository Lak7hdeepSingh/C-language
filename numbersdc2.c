#include <stdio.h>
int main(){
    int n;
    printf("Enter: ");
    scanf("%d",&n);
    int nst = n-1;
    int nsp = 1;
    for(int i = 1;i<(2*n);i++){
        if (i<=n){
        printf("%d",i);
        }
        else
            printf("%d",2*n-i);
    }
    printf("\n");
    for(int i = 1;i<=n;i++){
        int a = 1;
        for(int j = 1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        for(int k = 1;k<=nsp;k++){
            printf(" ");
        }
        a--;
        for(int j = 1;j<=nst;j++){
            printf("%d",a--);
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}
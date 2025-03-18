#include <stdio.h>
int main(){
    int n,a;
    printf("Enter: ");
    scanf("%d",&n);
    a = n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=a;j++){
            printf("*");
        }
        a--;
        if (i>=1)
            printf("\n"); 
    }
    int nsp = 0;
    int nos = n;
    for(int i = 1;i<=n;i++){
        for(int k = 1;k<=nsp;k++){
            printf(" ");
        }
        for(int j = 1;j<=nos;j++){
            printf("*");
        }
        nos--;
        nsp++;
        printf("\n");
    }
    
}
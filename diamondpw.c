#include <stdio.h>
int main(){
    int n;
    printf("enter : ");
    scanf("%d",&n);
    int nsp = n/2;
    int nos = 1;
    int ml = (n/2)+1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=nsp;j++){
            printf(" ");
            
        }
        for(int k = 1;k<=nos;k++){
            printf("*");
        }
        if (i<ml){
            nsp--;
            nos+=2;
            }
        else{
            nsp++;
            nos-=2;
        }
        printf("\n");
    }
}
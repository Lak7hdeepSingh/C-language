#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=(2*i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    // int a = 2*n-1;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         printf(" ");
    //     }
    //     for(int k = a;k>=1;k--){
    //         printf("*");
    //     }
    //     printf("\n");
    //     a=a-2;
    // }

}
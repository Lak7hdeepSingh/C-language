#include <stdio.h>
int main(){
    int n;
    printf("Enter : ");
    scanf("%d",&n);
    int a = n;
    for(int i = 1;i<=2*n-1;i++){
        for(int j = 1;j<=2*n-1;j++){
            if (i==1 || i==2*n-1 || j==1 || j==2*n-1){
                printf("%d ",a);
            }
            else {
                printf("  ");
            } 
        }
        printf("\n");
    }
}
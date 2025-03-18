#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter no. of  Rows : ");
    scanf("%d",&n1);
    printf("Enter no. of Column's : ");
    scanf("%d",&n2);
    for (int i = 1;i<=n1;i++){
        for(int j = 1;j<=n2;j++){
            if (i==1 || i==n1 || j==1 || j==n2){
                printf("*");
            }
            else
                printf(" ");
        }
    printf("\n");
        }
        }
#include <stdio.h>
int main(){
    int n;printf("Enter the size of Array : ");scanf("%d",&n);
    int mat1[n][n];
    int mat2[n][n];
    int result[n][n];
    printf("\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("Enter The elements of Matrix 1 [%d][%d] : \n",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("Enter The elements of Matrix 2 [%d][%d] : \n",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("\nMultiplication of the Matrix is : \n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            result[i][j] = 0;
            for(int k = 0;k<n;k++){
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}

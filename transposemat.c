#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the no. of rows : ");
    scanf("%d",&r);
    printf("Enter the no. of Columns : ");
    scanf("%d",&c);
    int arr[r][c];
    int brr[c][r];
    for(int i = 0 ;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("Enter The Elements Of Index arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nNormal Matrix\n");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose OF a Matrix\n");
    for(int i = 0;i<c;i++){
        for(int j = 0;j<r;j++){
            brr[i][j]=arr[j][i];
        }
    }
    for(int i = 0;i<c;i++){
        for(int j = 0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
}
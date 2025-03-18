#include <stdio.h>
int main(){
    int arr[2][2]={{1,2},{1,2}};
    int arr2[2][2]={{1,2},{1,2}};
    int sum[2][2];
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            arr[i][j]+=arr2[i][j];
        }
    }
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
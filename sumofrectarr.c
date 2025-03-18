#include <stdio.h>
int main(){
    int arr[5][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int r1,l1,r2,l2;
    printf("Enter R1 and L1 : ");
    scanf("%d %d",&r1,&l1);
    printf("Enter R2 and L2 : ");
    scanf("%d %d",&r2,&l2);
    int sum = 0;
    for(int i = r1;i<=r2;i++){
        for(int j = l1;j<=l2;j++){
            sum = sum + arr[i][j];
        }
    }
    for(int i = 0;i<5;i++){
        for(int j = 0;j<4;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("sum = %d",sum);

}
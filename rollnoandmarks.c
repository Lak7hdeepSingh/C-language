#include <stdio.h>
int main(){
    int r,c;
    printf("Enter number of Students : ");
    scanf("%d",&r);
    c = 4;
    int arr[r][c];
    for(int i = 0;i<r;i++){
            printf("Enter Roll No. : ");
            scanf("%d",&arr[i][0]);
            printf("Enter Physics Marks : ");
            scanf("%d",&arr[i][1]);
            printf("Enter Chemistry Marks : ");
            scanf("%d",&arr[i][2]);
            printf("Enter Maths Marks : ");
            scanf("%d",&arr[i][3]);
    }
    printf("\nDisplaying The Data...\n\n");
    printf("Rollno.\tPhysics\tChemistry\tMaths\n");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

}
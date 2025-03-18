#include <stdio.h>
int main(){
    int arr[6];
    for(int i = 0;i<6;i++){
        printf("Enter the Marks of Roll No. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("These No.s Have Failed\n");
    for (int i = 0;i<6;i++){
        if (arr[i] < 35) {
            printf("Roll No --> %d\n",i+1);
        }

    }
}
#include <stdio.h>
int main(){
    int arr[5]= {1,2,3,4,5};
    int arr2[5];
    for(int i = 0;i<5;i++){
        arr2[i]=arr[4-i];
    }
    printf("\n");
    for(int i = 0;i<5;i++){
        arr[i]=arr2[i];
        printf("%d ",arr[i]);
    }
}
#include <stdio.h>
int main(){
    int n = 10;
    int arr[10] = {1,0,0,2,0,3,4,0,0,5};
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[j]==0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nSorted Array\n");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
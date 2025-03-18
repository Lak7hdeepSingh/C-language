#include <stdio.h>
int main(){
    int n = 7;
    int arr[7] = {7,4,3,3,2,1,5};
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i = 0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
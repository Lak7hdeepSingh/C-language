#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[5] = {5,40,300,2,1};
    int n = 5;
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i = 0;i<n-1;i++){
        bool flag = true;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag==true){
            break;
        }
    }
    printf("\nSorted\n");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
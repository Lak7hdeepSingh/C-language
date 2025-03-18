#include <stdio.h>
int main(){
    int n = 6;
    int arr[6] = {6,5,3,2,1,4};
    for(int i =  0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    printf("\nSorted Array\n");
    for(int i =  0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
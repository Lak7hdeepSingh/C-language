#include <stdio.h>
int main(){
    int n = 10;
    int arr[10] = {1,0,0,2,0,3,4,0,0,5};
    int brr[10];
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int ind = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]!=0){
            brr[ind]=arr[i];
            ind++;
        }
    }
    for(int i = ind;i<n;i++){
        brr[i] = 0;
    }
    printf("\nSorted\n");
    for(int i = 0;i<n;i++){
        printf("%d ",brr[i]);
    }
}
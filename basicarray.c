#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    arr[4] = 9 ;
    for(int i = 0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    float arrr[5] = {1.25,2.25,3.22,4.69,5.78};
    arrr[4] = 9.36 ;
    for(int i = 0;i<5;i++){
        printf("%.2f\t",arrr[i]);
    }
    printf("\n");
    
    char carr[5] = {'A','B','C','%','9'};
    carr[4] = 'S';
    for(int i = 0;i<5;i++){
        printf("%c\t",carr[i]);
    }

}
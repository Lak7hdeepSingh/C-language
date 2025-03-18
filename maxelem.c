#include <stdio.h>
int main(){
    int arr[3][3] = {1,2,34,5,6,78,3,54,21};
    int max = -9999999;
    int min = __INT16_MAX__;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    printf("%d\n",max);
    printf("%d",min);
}
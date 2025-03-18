#include <stdio.h>
int main(){
    int arr[4][5] = {1, 2, 3, 4, 5, 100, 200, 300, 400, 500, 10, 20, 30, 40, 50, 7, 8, 9, 10, 11};


    int maxsum = -987878876;
    int rn = -1;
    for(int i = 0;i<4;i++){
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum+=arr[i][j];
        }
        if(sum>maxsum){
            maxsum = sum;
            rn=i;
        }
        
    }
    printf("The Row %d has the maximum sum Which is %d \n",rn,maxsum);  
}
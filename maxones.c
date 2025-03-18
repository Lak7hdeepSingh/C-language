#include <stdio.h>
int main(){
    int arr[4][5] = 
    {   0, 0, 1, 1, 1,  
        1, 1, 0, 1, 0,  
        1, 1, 1, 1, 1,  
        0, 0, 0, 1, 1   };
       
    int maxones = -923904;
    int rowno = 0;
    for(int i = 0;i<4;i++){
        int count = 0;
        for(int j = 0;j<5;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(maxones<count){
            maxones=count;
            rowno = i;
        }
    }
    printf("The Maximum No. of 1s are in Row No. %d",rowno);
}

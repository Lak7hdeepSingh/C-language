#include <stdio.h>
int main(){
    int n,g,count = 0;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    printf("Enter a number : ");
    scanf("%d",&g);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter element array[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        for(int j = 1+i;j<n;j++){
            if(arr[i]+arr[j]==g){
                count++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("There are %d Pairs making sum of %d",count,g);
}
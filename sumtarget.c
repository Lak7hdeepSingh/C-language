#include <stdio.h>
int main(){
    int n,t;
    printf("Enter Size of array : ");
    scanf("%d",&n);
    printf("Enter Target of array : ");
    scanf("%d",&t);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter element arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    int found = 0;
    int i = 0;
    int j = n-1;
    while(i<j){
            if(arr[i]+arr[j]==t){
                found++;
                printf("Elements Found are (%d,%d)\n",arr[i],arr[j]);
                i++;
                j--;
            }
            else if(arr[i]+arr[j]>t){
                j--;
            }
            else {
                i++;
            }
    }
    printf("No. of Pairs were %d\n",found);
    if(!found){
         printf("No Elements Found which Sum Up to %d",t);
    }
    
}
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
            for(int k = j+1;k<n;k++){
                    if(arr[i]+arr[j]+arr[k]==g){
                    count++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
            }
        }
        }
    }
    printf("There are %d Triplets making sum of %d",count,g);
}
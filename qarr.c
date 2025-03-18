#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter the a[%d] element : ",i);
        scanf("%d",&arr[i]);
    }
    printf("The given array is ");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(i%2==0){
            arr[i]+= 10;
        }
        else
            arr[i]*=2;
    }
    printf("\nThe Solved Array : ");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);}
}
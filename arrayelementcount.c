#include <stdio.h>
int main(){
    int n,g;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter a number : ");
    scanf("%d",&g);
    int arr[n];
    int count = 0;
    for(int i = 0;i<n;i++){
        printf("Enter the a[%d] element : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        if (arr[i]>g){
            count++;
        }
    }
    printf("The No of Elements Greater than %d are %d",g,count);

}
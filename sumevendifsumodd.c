#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter element array[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    int esum = 0;int osum = 0;
    for(int i = 0;i<n;i++){
        if(i%2==0){
            esum +=arr[i];
        }
        else
            osum +=arr[i];
    }
    printf("The sum of Odd indexes is %d\n The sum of Even Integers is %d\n The difference of them is %d",esum,osum,esum-osum);

}
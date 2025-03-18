#include <stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int j,i;
printf("Enter Start : ");
scanf("%d",&i);
printf("Enter End : ");
scanf("%d",&j);
while(i<j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
}
for(int l = 0;l<5;l++){
    printf("%d ",arr[l]);
}
}
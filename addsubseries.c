#include<stdio.h>
int main(){
    int n,i = 1,sum=0,sum2=0;
    printf("Enter a Number ");
    scanf("%d",&n);
    while(i<=n){
        if (i%2==0){
            sum = sum + i;
            
        }
        else
            sum2 = sum2 + i;

        i++;   
        }
    printf("Even Numbers sum is %d\n",sum);
    printf("Odd Numbers sum is %d",sum2);
    printf("\nTotal Sum = %d ",sum2-sum);
}
    
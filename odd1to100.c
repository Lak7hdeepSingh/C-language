#include <stdio.h>
int main(){
    printf("Enter a Number : ");
    int n;
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        if (i%2!=0){
            continue;
        }
        printf("%d\n",i);
    }
}
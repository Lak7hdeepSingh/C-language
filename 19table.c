#include <stdio.h>
int main(){
    int n;
    printf("Enter the number To get its Table ;");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        int m = i*n;
        printf("%d x %d = %d\n",n,i,m);
    }
}

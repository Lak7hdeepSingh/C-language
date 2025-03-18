#include <stdio.h>
int main(){
    int n;
    printf("Enter the Number of Times You want THe program to run : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i=i+3){
            printf("Hello world\n");
        }
    return 0;
}
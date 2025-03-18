#include <stdio.h>
int main(){
    int n,c;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        c = 65;
        if (i%2!=0){
            for (int j = 1;j<=i;j++){
                printf("%d",j);
        }
        }
        else
            for (int j = 1;j<=i;j++){
                char ch = (char)c;
                printf("%c",c);
                c++;
            }

    printf("\n");
    }
}
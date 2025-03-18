#include <stdio.h>
int main(){
    int n,c;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        c = 65;
        for(int j = 1;j<=i;j++){
            char ch = (char)c;
            printf("%c ",ch);
            c++;
        }
    printf("\n");
}
}
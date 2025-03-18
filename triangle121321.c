#include <stdio.h>
int main(){
    int n;
    char ch;
    printf("Enter : ");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        char ch = (char)i;
        for(int j = 1;j<=65-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            char ch = (char)i;
            printf("%c",ch);
        }
        for(int l = i-1;l>=1;l--){
            printf("%c",ch);
        }
        printf("\n");
    }
}

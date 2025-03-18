#include <stdio.h>
int main(){
    int a ,b,c;
    printf("Enter The Sides of Traingle A,B,C respectively Press Enter After Entering :) ");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b){
        printf("The Following Sides %d,%d,%d form an Triangle ",a,b,c);
    }
    else{
        printf("The Following Sides %d,%d,%d Do not Form a Triangle :( ",a,b,c);
    }
} 
#include <stdio.h>
int main (){
    int m;
    printf("Enter the Marks : ");
    scanf("%d",&m);
    if (m>90){
        printf("A Grade");
    }
    else if(m>70){
        printf("B Grade");
    }
    else if (m>50){
        printf("C Grade");
    }
    else {
        printf("Fail");
    }
}
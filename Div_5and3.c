//Ques : Take positive integer input and tell if it is divisible by 5 and 3
#include <stdio.h>
int main(){
    int n ;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if (n%5==0 && n%3==0){
        printf("Yes Number %d Divisible By 5 as well as with 3......",n);
    }
    else{
        printf("No %d Can not be divisible by 5 and 3 both..",n);
    }

}

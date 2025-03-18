#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("Yes %d is divisble by both 3 and 5", n);
        }
        else{
            printf("No %d is divisble by both 3 and 5", n);

        }
    }
    else{
        printf("No %d is divisble by both 3 and 5", n);

    }
}
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter 1st Number  : ");
    scanf("%f", &a);
    printf("Enter 2nd Number  : ");
    scanf("%f", &b);
    printf("Enter 3rd Number  : ");
    scanf("%f", &c);   
    if (a > b && a > c)
    {
        printf("%f is The Greatest", a);
    } 
    if (b > a && b > c)
    {
        printf("%f is The Greatest", b);
    }
    if (c > b && c > a)
    {
        printf("%f is The Greatest", c);
    }
}
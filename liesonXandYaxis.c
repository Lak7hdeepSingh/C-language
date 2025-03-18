#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter The Value of X And Y respectively : ");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0)
        printf("the cordinates lie on The orgin");
    else if (x == 0)
        printf("The Cordinate Lies on Y axis ");
    else if (y == 0)
        printf("The Given Coordinates Lie on X axis ");
    else
        printf("The Given Cordinates doesnt lie on either X or Y axis");
}
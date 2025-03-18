#include <stdio.h>

int main()
{
    int L,W,AREA,PERI;
    printf("Program to know whether the AREA of the RECTANGLE is > PERIMETER");
    printf("\n Enter The Length :");
    scanf("%d",&L);
    printf("\n Enter The Width :");
    scanf("%d",&W);
    AREA = (L*W);
    PERI = 2*(L+W);
    if (AREA>PERI){
        printf(" 'YES' The Area Of the RECTANGLE is > PERIMETER of The RECTANGLE...");
    }
    if (PERI>AREA){
        printf(" 'NO' The Area Of the RECTANGLE is NOT> PERIMETER of The RECTANGLE...");
    }


}
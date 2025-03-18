#include <stdio.h>

int main(){
    float x1,y1,x2,y2,x3,y3,m1,m2;
    printf("Enter The value of X1 = ");
    scanf("%f",&x1);
    printf("Enter The value of Y1 = ");
    scanf("%f",&y1);
    printf("Enter The value of X2 = ");
    scanf("%f",&x2);
    printf("Enter The value of Y2 = ");
    scanf("%f",&y2);
    printf("Enter The value of X3 = ");
    scanf("%f",&x3);
    printf("Enter The value of Y3 = ");
    scanf("%f",&y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if (m1==m2)
        printf("True They lie on a straight line");
    else
        printf("False The given points do not lie on a Straight Line");

}
/* Area of Tringle*/
#include<stdio.h>
#include<conio.h>
#include <math.h>
void main()
{
    int s, a, b, c, area;
 	l:
    printf("Enter the values of a, b and c \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a < 0 || b < 0 || c <0 || (a+b <= c) ||  a+c <=b || b+c <=a) 
    { 
        printf("Not a valid trianglen"); 
        goto l; 
    } 
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of a triangle = %d \n", area);
}

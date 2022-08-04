#include<stdio.h>

int main()
{
    float rad;
    printf("Enter Radius of circle: ");
    scanf("%f",&rad);
    float ar = 3.14*rad*rad;
    printf("Area of circle is %.2f \n",ar);

    return 0;
}
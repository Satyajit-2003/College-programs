#include<stdio.h>

int main()
{
    float base,hei;
    printf("Enter value of base: ");
    scanf("%f",&base);
    printf("Enter value of height: ");
    scanf("%f",&hei);
    float ar = 0.5*base*hei;
    printf("The are of the triangle is %.2f \n",ar);

    return 0;
}
#include<stdio.h>

int main()
{
    float rad;
    printf("Enter Raduis of circle: ");
    scanf("%f",&rad);
    float peri = 2*3.14*rad;
    printf("Perimeter of circle is %.2f \n",peri);

    return 0;
}
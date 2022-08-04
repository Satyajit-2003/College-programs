#include<stdio.h>

int main()
{
    float far;
    printf("Enter temperature in Farrenheit: ");
    scanf("%f",&far);
    float cel = (far-32)/1.8;
    printf("Temperature in Cemtigrade is %.2f \n",cel);

    return 0;
}

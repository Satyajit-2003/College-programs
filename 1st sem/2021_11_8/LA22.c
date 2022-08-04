#include<stdio.h>

int main()
{
    float cel;
    printf("Enter temperature in Centigrade: ");
    scanf("%f",&cel);
    float far = (cel*1.8)+32;
    printf("Temperature in Fahrenheit is %.2f \n",far);

    return 0;
}

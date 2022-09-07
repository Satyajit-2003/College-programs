/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main()
{
    int a,b,c;
    float x;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    x = (float)a/(b-c);
    printf("The value of x is %f", x);
    
    return 0;
}

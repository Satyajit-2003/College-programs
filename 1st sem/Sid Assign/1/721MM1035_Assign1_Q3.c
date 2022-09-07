/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float s,area;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);
    

    s = (a+b+c)/2;
    area = sqrt(s* (s-a)* (s-b) * (s-c));

    printf("Area of the triangle is %f", area);

    return 0;
}

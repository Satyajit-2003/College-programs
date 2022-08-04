/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main()
{
    int s1,s2,s3;

    printf("Enter side 1: ");
    scanf("%d", &s1);
    printf("Enter side 2: ");
    scanf("%d", &s2);
    printf("Enter side 3: ");
    scanf("%d", &s3);

    if ((s1<s2+s3)&&(s2<s1+s3)&&(s3<s1+s2))
        printf("The triangle is valid");
    else
        printf("The triangle is invalid");
    
    
    return 0;
}

/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main()
{
    int num;
    printf("Input the number: ");
    scanf("%d", &num);

    for (int i = 1; i < 11; i++)
        printf("%d X %d = %d\n", num, i, num*i);
    
    return 0;
}

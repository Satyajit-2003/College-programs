/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main()
{
    int calls;
    float cost = 5000;
    _Bool x;
    printf("Enter the number of calls: ");
    scanf("%d",&calls);

    cost += (2.50*(calls-100));
    x = calls>100;
    
    (x && printf("The total bill is Rs.%.2f", cost)) || printf("The total bill is Rs.5000");
    return 0;
}

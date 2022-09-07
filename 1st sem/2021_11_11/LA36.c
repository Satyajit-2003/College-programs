#include<stdio.h>

int main()
{
    int grade ;
    printf("Enter Mark :");
    scanf("%d",&grade);

    if (grade<= 40 && grade>=0)
        printf("Grade is F");
    else if (grade<=60)
        printf("grade is E");
    else if (grade<=70)
        printf("grade is D");
    else if (grade<=80)
        printf("grade is C");
    else if (grade<=90)
        printf("grade is D");
    else if (grade<=100)
        printf("grade is A");
    else
        printf("INVALID INPUT");  

    printf("\n");

    return 0;
}

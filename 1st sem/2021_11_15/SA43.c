#include<stdio.h>

int main()
{
    int num, fact_76,i=1;
    fact_76 = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i<num+1)
    {
        fact_76*=i;
        i+=1;
    } 

    printf("The factorial of number you entered is %d\n", fact_76);
    
    return 0;
}

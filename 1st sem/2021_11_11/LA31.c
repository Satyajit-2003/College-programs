#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter Num1 :");
    scanf("%d",&num1);
    printf("Enter Num2 :");
    scanf("%d",&num2);

    if (num1>num2)
        printf("Num1 is greater i.e. %d\n", num1);
    else if (num1 == num2)  
        printf("Both num1 and num2 are equal\n");    
    else
        printf("Num2 is greater i.e. %d \n", num2);    

    return 0;
}

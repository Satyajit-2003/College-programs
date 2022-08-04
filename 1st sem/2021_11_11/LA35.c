#include<stdio.h>

int main()
{
    int num1, num2, res;
    printf("Enter Num1 :");
    scanf("%d",&num1);
    printf("Enter Num2 :");
    scanf("%d",&num2);

    printf("Enter your choice   \n1 for addition   \n2 for subtraction    \n3 for multiplication  \n4 for divison\n");
    scanf("%d",&res);

    if (res == 1)
        printf("Addition of given numbers %d\n", num1+num2);
    else if (res == 2)  
        printf("Subtraction of given numbers %d\n",num1-num2);    
    else if (res == 3)  
        printf("Product of given numbers %d\n",num1*num2);    
    else if (res == 4)  
        printf("Quotient of given numbers %.2f\n",(float)num1/(float)num2);    
    else
        printf("INVALID INPUT\n");    

    return 0;
}

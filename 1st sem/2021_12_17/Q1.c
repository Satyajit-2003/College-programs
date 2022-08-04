#include<stdio.h>

void calc(int num1,int num2, int oper);

int main()
{
    int n1,n2,res;
    printf("Enter num1: ");
    scanf("%d",&n1);
    printf("Enter num2: ");
    scanf("%d",&n2);

    printf("Please choose operation:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for divison\n");
    scanf("%d",&res);

    calc(n1,n2,res);   
       
    return 0;
}

void calc(int num1,int num2, int oper){
    printf("\n");
    switch (oper)
    {
    case 1:
        printf("The addition of %d and %d is %d", num1, num2, num1+num2);
        break;
    
    case 2:
        printf("The subtraction of %d and %d is %d", num1, num2, num1-num2);
        break;
    
    case 3:
        printf("The product of %d and %d is %d", num1,num2,num1*num2);
        break;
    
    case 4:
        printf("The quotient of %d and %d is %.2f", num1, num2, (float)num1/(float)num2);
        break;
    
    default:
        printf("Wrong operand type");
    }
}

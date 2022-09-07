#include<stdio.h>

void greater(int num1,int num2);

int main()
{
    int n1,n2;
    printf("Enter num1: ");
    scanf("%d",&n1);
    printf("Enter num2: ");
    scanf("%d",&n2);
    greater(n1,n2);
    return 0;
}

void greater(int num1,int num2){
    if (num1>num2)
        printf("The greater number is %d", num1);
    else
        printf("The greater number is %d", num2);    
}

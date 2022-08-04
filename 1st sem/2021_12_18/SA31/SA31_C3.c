#include<stdio.h>

int greater(int num1,int num2);

int main()
{
    int n1,n2;
    printf("Enter num1: ");
    scanf("%d",&n1);
    printf("Enter num2: ");
    scanf("%d",&n2);
    int res = greater(n1,n2);
    printf("The greater number is %d", res);
    return 0;
}

int greater(int num1,int num2){
    if (num1>num2)
        return num1;
    return num2;    
}

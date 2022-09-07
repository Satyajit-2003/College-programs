#include<stdio.h>

void greater();

int main()
{    
    greater();
    return 0;
}

void greater(){
    int n1,n2;
    printf("Enter num1: ");
    scanf("%d",&n1);
    printf("Enter num2: ");
    scanf("%d",&n2);
    if (n1>n2)
        printf("The greater number is %d", n1);
    else
        printf("The greater number is %d", n2);   
}

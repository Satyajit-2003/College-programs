#include<stdio.h>

int greater();

int main()
{    
    int res = greater();
    printf("The greater number is %d", res);
    return 0;
}

int greater(){
    int n1,n2;
    printf("Enter num1: ");
    scanf("%d",&n1);
    printf("Enter num2: ");
    scanf("%d",&n2);
    if (n1>n2)
        return n1;
    return n2;    
}

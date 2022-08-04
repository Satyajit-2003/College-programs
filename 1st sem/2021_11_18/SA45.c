#include<stdio.h>

int main()
{    
    int num1, num2, i=1, hcf;

    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);

    while (i<num1+1)
    {
        if ((num1%i == 0) && (num2%i == 0))
            hcf = i;
        i++;
    }

    printf("HCF of %d and %d id %d\n",num1, num2, hcf);

    return 0;
}

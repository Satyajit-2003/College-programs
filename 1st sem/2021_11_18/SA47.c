#include<stdio.h>
#include<math.h>

int main()
{    
    int num;
    float temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    for (int i = 1; i < num; i++)
    {
        if (num%i == 0)
            temp+=i;
    }

    if (temp == num)
        printf("%d is a perfect number\n",num);
    else
        printf("%d is not a perfect number\n",num);
    
    
    
    return 0;
}
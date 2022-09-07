#include<stdio.h>

int main()
{    
    int num, temp=0, sum=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    for (int i = 1; i < num+1; i++)
    {
        temp+=i;
        sum+=temp;
        //printf("%d %d\t",temp,sum);
    }
    
    printf("The value of S for %d is %d\n",num,sum);
}
#include<stdio.h>

int main()
{
    int n,i, second_last=1,last=1,temp;
    printf("enter n: ");
    scanf("%d",&n);
    printf("1\t1\t");

    for (i = 0; i < n-2; i++)
    {
        temp = last+second_last;
        printf("%d\t",temp, last, second_last);
        second_last = last;
        last = temp;
        
    }
    printf("\n");
    

    return 0;
}

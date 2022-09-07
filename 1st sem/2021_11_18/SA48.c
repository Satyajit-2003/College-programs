#include<stdio.h>

int main()
{    
    int n, sec_last = 0, last = 1, i ,temp;
    printf("Enter n: ");
    scanf("%d",&n);

    if(n==1)
        printf("0");
    else
        printf("0\t1\t");
    for ( i = 0; i < n-2; i++)
    {
        temp = sec_last+last;
        printf("%d\t",temp);
        sec_last = last;
        last = temp;
    }
    printf("\n");  

    return 0;
}
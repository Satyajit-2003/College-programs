#include<stdio.h>

int main()
{    
    int x,n, prod=1;

    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
        prod*=x;
    
    printf("%d ^ %d is %d\n",x,n,prod);         
    
    return 0;
}

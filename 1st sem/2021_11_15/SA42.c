#include<stdio.h>

int main()
{
    int start_76, stop;
    printf("Enter starting number: ");
    scanf("%d",&start_76);
    printf("Enter last number: ");
    scanf("%d",&stop);
    
    while (start_76<stop+1)
    {
        printf("%d\n",start_76);
        start_76+=1;
    }
    
    return 0;
}
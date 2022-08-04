#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("The swapped values of x and y are %d and %d respectively\n",x,y);

    return 0;
}
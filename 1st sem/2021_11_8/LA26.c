#include<stdio.h>

int main()
{
    int m;
    printf("Enter value in meter: ");
    scanf("%d",&m);
    int km = m/1000;
    int me = m%1000;
    printf("The value is %d Km %d m \n",km,me);

    return 0;
}
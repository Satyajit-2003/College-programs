#include<stdio.h>

int main()
{    
    int num, temp = 1;

    printf("Enter n: ");
    scanf("%d",&num); 

    printf("1\t");
    for (int i = 1; i < num; i++)
    {
        temp = (2*temp)+1;
        printf("%d\t",temp);
    }

    printf("\n");       
    
    return 0;
}

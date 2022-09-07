/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < 11; j++)
            printf("%d X %d = %d,  ", i,j, i*j);
        printf("\n\n");        
    }
    
    return 0;
}

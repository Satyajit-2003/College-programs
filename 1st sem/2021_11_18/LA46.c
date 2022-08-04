#include <stdio.h>

int main()
{
    int n, i = 3, temp = 0;
    printf("enter n: ");
    scanf("%d", &n);

    while (temp <= n)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;

            if (j == i - 1)
            {
                printf("%d\t", i);
                temp++;
            }
        }
        i++;
    }
    printf("\n");

    return 0;
}

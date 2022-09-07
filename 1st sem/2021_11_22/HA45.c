#include <stdio.h>
int main()
{
    int n, coef = 1, i_76, j_76;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i_76 = 0; i_76 < n; i_76++)
    {
        for (j_76 = 1; j_76 <= n - i_76; j_76++)
            printf(" ");

        for (j_76 = 0; j_76 <= i_76; j_76++)
        {
            if (j_76 == 0 || i_76 == 0)
                coef = 1;
            else
                coef = coef * (i_76 - j_76 + 1) / j_76;
            printf("%d  ", coef);
        }
        printf("\n");
    }

    return 0;
}
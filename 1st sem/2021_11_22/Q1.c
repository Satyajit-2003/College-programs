#include <stdio.h>
int main()
{
    int n, i_76, j_76;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i_76 = 1; i_76 <= n; i_76++)
    {
        for (j_76 = 1; j_76 <= i_76; j_76++)
        {
            if (i_76%2 == 1)
                printf("%c ",'A'+i_76/2);
            else
                printf("%d ",i_76/2);
            
        }
        printf("\n");
    }

    return 0;
}
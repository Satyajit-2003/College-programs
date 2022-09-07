#include <stdio.h>
int main()
{
    int i_76, j_76, n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (i_76 = 1; i_76 <= n; i_76++)
    {
        if (i_76%2 == 0)
        {
            for (j_76 = i_76; j_76 >= 1; j_76--)
            printf("%d ",  j_76 );
        }
        else
        {
            for (j_76 = 1; j_76 <= i_76; j_76++)
            printf("%d ", j_76 );
        }
        
        printf("\n");
    }
    return 0;
}
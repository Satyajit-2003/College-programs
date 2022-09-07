#include <stdio.h>
int main()
{
    int n, i_76, j_76;
    printf("Enter n : ");
    scanf("%d", &n);

    for (i_76 = 1; i_76 <= n; i_76++)
    {       
        for (j_76 = n- i_76; j_76 > 0; j_76--)
            printf("  ");

        for (j_76 = i_76; j_76 >= 1; j_76--)
            printf("%d ",j_76); 

        for (j_76 = 1; j_76 < i_76; j_76++)
            printf("%d ",j_76+1);       
        
        printf("\n");
    }

    for (i_76 = 0; i_76 <= n-1; i_76++)
    {
        for (j_76 = 0; j_76 <= i_76; j_76++)
            printf("  ");
        
        for (j_76 = n-i_76-1; j_76 >= 1; j_76--)
            printf("%d ",j_76);

        for (j_76 = 2; j_76 <=  n-i_76-1; j_76++)
            printf("%d ",j_76);       

        printf("\n");
        
    } 

    return 0;
}
//Q10

#include<stdio.h>

int main()
{
    int a[5], *p, *p1, i, n;
    p = a;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", p+i);
    }
    p1 = p+i-1;

    printf("Array after reversing: ");
    for (i = 0; i < n; i++)
        printf("%d\t", *p1--);    
    
    return 0;
}

//4

#include <stdio.h>
int i, j = 0;

void search(int n, int *p, int m)
{
    for (i = 0; i < n; i++)
    {
        if (m == *(p+i))
        {
            j = 1;
            break;
        }
    }
    if (j)
        printf("%d is present in the %d index of array", m, i);
    else
        printf("%d is not present in the array", m);
}

int main()
{
    int n, m;
    printf("Enter the size of your array : ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to find : ");
    scanf("%d", &m);
    search(n, a, m);
    return 0;
}
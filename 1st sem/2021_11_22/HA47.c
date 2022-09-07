#include <stdio.h>

int main()
{
    int n, r, bin = 0, rev = 1;

    printf("Enter a decimal number : ");
    scanf("%d", &n);

    for (int i = n; i != 0; i = i / 2)
    {
        r = i % 2;
        bin = bin + (rev * r);
        rev = rev * 10;
    }

    printf("Equivalent number in binary is %d\n", bin);

    return 0;
}

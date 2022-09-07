#include <stdio.h>
void main()
{
    int i, j, l1, l2;
    char str1[100], str2[100];
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);
    for (i = 0, j = 0; str1[i] != '\0', str2[j] != '\0'; i++, j++)
    {
    }
    l1 = i;
    l2 = l1 + j;
    for (i = l1 - 1; i <= l2; i++, j--)
    {
        str1[i] = str2[j];
    }
    printf("Concatenated string is : ");
    for (i = 0; i <= l2; i++)
    {
        printf("%c", str1[i]);
    }
}
#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character :");
    scanf("%c",&c);

    if (c>='A' && c<='Z')
        printf("Small letter is %c\n",c+32);
    else
        printf("This is not a upper case letter\n");    

    return 0;
}
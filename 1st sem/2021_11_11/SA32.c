#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character :");
    scanf("%c",&c);

    if (c>='a' && c<='z')
        printf("Capital letter is %c\n",c-32);
    else
        printf("This is not a lower case letter\n");    

    return 0;
}

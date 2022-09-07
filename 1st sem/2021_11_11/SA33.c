#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character :");
    scanf("%c",&c);

    if ((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
        c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            printf("The given character is vowel\n");
        else
            printf("The given character is consonant\n");

    }
    else
        printf("The given character is not an alphabet\n");

    return 0;
}

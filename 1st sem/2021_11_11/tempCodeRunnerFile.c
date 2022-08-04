#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character :");
    scanf("%c",&c);
    int ascii = (int)c;

    if (ascii>=97 && ascii<=122)
        printf("Lower case letter entered\n");
    else if (ascii>=65 && ascii<=90)
        printf("Lower case letter entered");
    else if (ascii>=48 && ascii<=57)
        printf("Digit entered\n");
    else if ((ascii>=33 && ascii<=47)||(ascii>=58 && ascii<=64)||
                (ascii>=91 && ascii<=96) || (ascii>=123 && ascii<=126))
        printf("Special symbols entered\n");
    else if (ascii==32)
        printf("White space entered\n");  
    

    return 0;
}
//Q7
//7.WAP to check whether a string entered through keyboard is palindrome or not.

#include<stdio.h>

int main(){
    char str[50];
    int last = -1, start = 0, palin = 1;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
        last ++;

    while(start < last){
        if (str[start] != str[last])
            palin = 0;
        start ++;
        last --;
    }

    if (palin)
        printf("The string is a palindrome");
    else
        printf("The string is not a palindrome");

    return 0;
}
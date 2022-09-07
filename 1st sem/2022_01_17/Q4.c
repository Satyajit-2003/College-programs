//Q4
//4.WAP to replace all occurrences of a character in a given string with a new character.

#include<stdio.h>

int main(){
    char str[50], org, replace;

    printf("Enter string: ");
    gets(str);
    printf("Enter character to be replaced: ");
    scanf("%c", &org);
    printf("Enter character to be replaced with: ");
    scanf("%c", &replace);   // To get the \n after pressing enter from prev input 
    scanf("%c", &replace);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == org)
            str[i] = replace;        
    }

    printf("String after replacing: ");
    puts(str);

    

    return 0;
}
//Q5
//WAP to extract the last character of each word of a given string.

#include<stdio.h>

int main(){
    char str[50];

    printf("Enter a string: ");
    gets(str);

    printf("The last letter of words are:\n");
    for (int i = 0; i < 50; i++){
        if (str[i] == '\0'){
            printf("%c\t", str[i-1]);
            break;
        }
        if (str[i] == ' '){
            printf("%c\t", str[i-1]);
        }        
    }
    

    return 0;
}
//Q1
//WAP to extract the first character of each word of a given string

#include<stdio.h>

int main(){
    char str[50];

    printf("Enter a string: ");
    gets(str);

    printf("The first letter of words are: \n%c\t", str[0]);
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' '){
            printf("%c\t", str[i+1]);
        }        
    }
    
    return 0;
}
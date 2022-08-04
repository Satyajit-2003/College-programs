//Q6
//6. Write a program to concatenate two strings without using any library function.

#include<stdio.h>

int main(){
    char org[50], concat[50];
    int size;

    printf("Enter a string: ");
    gets(org);
    printf("Enter string to be concatenated: ");
    gets(concat);

    for (int i = 0; i < 50; i++){
        if (org[i] == '\0'){
            for (int j = 0; concat[j] != '\0'; j++){
                org[i+j] = concat[j];
            size = i+j;
            }
            break;           
        }
    }

    printf("The string after concatination: ");
    for (int i = 0; i < size+1; i++)
        printf("%c", org[i]);

    return 0;
}
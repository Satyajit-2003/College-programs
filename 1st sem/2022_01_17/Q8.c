//Q8
//8.Write a program to count the number of characters, alphabets, tabs, newlines, 
//words, vowels, consonants present in a in a string.

#include<stdio.h>

int main(){
    char str[50];
    int vowels = 0, conson = 0, size = 0, tab = 0, word = 1, line = 1;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++){
        size ++;
        if (str[i] == 97 || str[i] == 101 || str[i] == 105 || 
        str[i] == 111 || str[i] == 117 || 
        str[i] == 65 || str[i] == 69 || str[i] == 73 || 
        str[i] == 79 || str[i] == 85 )
            vowels ++;
        else if((64<str[i] && str[i]<90) || (96<str[i] && str[i]<123))
            conson ++;
        else if (str[i] == 32)
            word ++;
        else if (str[i] == '\t')
            tab ++;
        else if (str[i] == '\n')
            line ++;       
    }

    printf("Numer of characters :%d\n", size);
    printf("Numer of words :%d\n", word);
    printf("Numer of alphabets :%d\n", vowels + conson);
    printf("Numer of vowels :%d\n", vowels);
    printf("Numer of consonants :%d\n", conson);
    printf("Numer of tab :%d\n", tab);
    printf("Numer of new lines :%d\n", line);

    return 0;
}
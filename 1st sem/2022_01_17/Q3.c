//Q3
//3.WAP to reads a sentence and prints the number of vowels and consonants present in the sentence.

#include<stdio.h>


int main(){
    char str[50];
    int vowel = 0, conson = 0;
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == 97 || str[i] == 101 || str[i] == 105 || 
        str[i] == 111 || str[i] == 117 || 
        str[i] == 65 || str[i] == 69 || str[i] == 73 || 
        str[i] == 79 || str[i] == 85 )
            vowel ++;
        else if((64<str[i] && str[i]<90) || (96<str[i] && str[i]<123))
            conson ++;
    }

    printf("Number of vowels is %d", vowel);
    printf("\nNumber of consonants is %d", conson);

    return 0;
}
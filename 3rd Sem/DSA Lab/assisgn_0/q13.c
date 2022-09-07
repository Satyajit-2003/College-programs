#include<stdio.h>

//WAP to replace all vowels from a string with its immediate consonant.

int main(){
    char string[100];
    int temp;
    printf("Enter the string: ");
    scanf("%[^\n]s", &string);

    for (int i = 0; i < 100; i++){
        temp = string[i];
        if (temp == 65 || temp == 69 || temp == 73 || temp == 79 || temp == 85 || 
        temp == 97 || temp == 101 || temp == 105 || temp == 111 || temp == 117){
            string[i] = (char)(temp + 1);
        }
    }

    puts(string);
    return 0;
}
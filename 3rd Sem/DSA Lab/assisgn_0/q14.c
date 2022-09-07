#include<stdio.h>

//WAP to find the position of substring in a given string.

int main(){
    char string[100], substring[100], temp;
    printf("Enter string: ");
    gets(string);
    printf("Enter substring: ");
    gets(substring);

    for (int i =0; i < 100; i++){
        temp = string[i];
        if (temp == substring[0]){
            for (int j = 0; j < 100; j++){
                if (string[i+j] != substring[j]){
                    break;
                }
                if (j == 99){
                    printf("Substring found at position %d\n", i);
                    return 0;
                }
            }
        }
    }
    printf("Substring not found\n");
    return 0;
}

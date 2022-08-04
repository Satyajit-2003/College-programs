//Q2
//2.WAP to extract a substring of a given string.

#include<stdio.h>

int main(){
    char str[50], extrat[50];
    int pos = -1, size;

    printf("Enter a string: ");
    gets(str);

    printf("Enter string to be extracted: ");
    gets(extrat);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == extrat[0]){
            size = 0;
            for (int j = 0; j < 50; j++){
                if (extrat[j] == '\0'){
                    pos = i;
                    break;
                }
                if (str[i+j] != extrat[j])
                    break;
                size ++;
            }
        }
        if (pos != -1)
            break;
    }
    
    if (pos == -1)
        printf("Substring not found");
    else{
        printf("Substring found at position %d", pos);
        int extracted[50];

        for (int i = 0; i<size; i++){
            extracted[i] = str[pos+i];
        }

        printf("\nExtracted string is: ");    

        for (int i = 0; i<size; i++){
            printf("%c", extracted[i]);
        }
    }


    return 0;
}
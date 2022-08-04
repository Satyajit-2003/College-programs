//Q9
//9.WAP reads a sentence and prints frequency of each of the vowels and total count of Consonants.

#include<stdio.h>

int main(){
    char str[50];
    int conson = 0, a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Enter a string: ");
    gets(str);

    for (int k = 0; str[k] != '\0'; k++){
        if((64<str[k] && str[k]<90) || (96<str[k] && str[k]<123)){
            if (str[k] == 97 || str[k] == 65)
                a ++;
            else if (str[k] == 101 || str[k] == 69)
                e ++;
            else if (str[k] == 105 || str[k] == 73)
                i ++;
            else if (str[k] == 111 || str[k] == 79)
                o ++;
            else if (str[k] == 117 || str[k] == 85)
                u ++;
            else    
                conson ++;   
        }       
    }

    printf("Total 'A' is: %d\n", a);
    printf("Total 'E' is: %d\n", e);
    printf("Total 'I' is: %d\n", i);
    printf("Total 'O' is: %d\n", o);
    printf("Total 'U' is: %d\n", u);
    printf("Total consonants are: %d", conson);
    
    


    return 0;
}
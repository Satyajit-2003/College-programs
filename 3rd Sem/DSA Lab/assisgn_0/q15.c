#include<stdio.h>

//Count frequency of each character in a string.

int main(){
    char str[100];
    int freq[26] = {0};
    printf("Enter the string: ");
    scanf("%[^\n]s", &str);

    int i = 0;
    while (str[i] != '\0'){
        if  (str[i]>= 'A' && str[i] <= 'Z')
            freq[str[i] - 'A']++;
        if  (str[i]>= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
        i++;        
    }

    for (int j = 0; j < 26; j++)
    {
        if (freq[j] != 0)
            printf("%c : %d\n", 'A'+j, freq[j]);
    }

    return 0;    
}
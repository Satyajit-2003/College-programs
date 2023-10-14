#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char* str1 = (char*) malloc(sizeof(char) * 100);
    scanf("%s", str1);
    int m =strlen(str1);
    
    char* str2 = (char*) malloc(sizeof(char) * 100);
    scanf("%s", str2);
    int n = strlen(str2);

    int** dp = (int**) malloc(sizeof(int*) * (m+1));
    for (int i = 0; i <= m; i++){
        dp[i] = (int*) malloc(sizeof(int) * (n+1));
    }

    int **dir = (int**) malloc(sizeof(int*) * (m+1));
    for (int i = 0; i <= m; i++){
        dir[i] = (int*) malloc(sizeof(int) * (n+1));
    }

    
}
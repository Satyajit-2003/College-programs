#include<stdio.h>

int main(){
    unsigned int n = 1;
    if ((*(char *)&n == 1)){
        printf("Little Endian\n");
    }else{
        printf("Big Endian\n");
    }
    printf("Enter the number: ");
    scanf("%u", &n);

    printf("Byte 1: %u\n", (n >> 24) & 0xFF);
    printf("Byte 2: %u\n", (n >> 16) & 0xFF);
    printf("Byte 3: %u\n", (n >> 8) & 0xFF);
    printf("Byte 4: %u\n", (n) & 0xFF);

    unsigned int res = 0;
    res = res | (n << 24);
    res = res | (n << 8);
    res = res | (n >> 8);
    res = res | (n >> 24);

    printf("The number after repacking: %u", res);

    return 0;
    
}
#include<stdio.h>

typedef struct st
{
    unsigned char ch1;
    unsigned char ch2[2];
    unsigned char ch3;
} pkt;


int main(){
    unsigned int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    pkt num_pkt;
    num_pkt.ch1 = (num) & 0xFF;
    num_pkt.ch2[0] = (num >> 8) & 0xFF;
    num_pkt.ch2[1] = (num >> 16) & 0xFF;
    num_pkt.ch3 = (num >> 24) & 0xFF;

    unsigned int res = 0;
    printf("Byte 1: %u\n", num_pkt.ch1);
    printf("Byte 2: %u\n", num_pkt.ch2[0]);
    printf("Byte 3: %u\n", num_pkt.ch2[1]);
    printf("Byte 4: %u\n", num_pkt.ch3);

    res = res | (num_pkt.ch3 << 24);
    res = res | (num_pkt.ch2[1] << 16);
    res = res | (num_pkt.ch2[0] << 8);
    res = res | (num_pkt.ch1);

    printf("The number after repacking: %u", res);

    return 0;

}
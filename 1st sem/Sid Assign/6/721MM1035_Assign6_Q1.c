/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int to_bin(int num){
    int bin = 0, rem;
    while (num != 0){
        rem = num%2;
        bin = (bin * 10) + rem;
        num /= 2;
    }
    return bin;

}
int main(){
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    int binary = to_bin(num);
    printf("Binary of %d is %d", num, binary);

    return 0;
}
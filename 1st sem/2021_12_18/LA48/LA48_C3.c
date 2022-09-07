#include<stdio.h>

int reverse(int num);

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int res = reverse(num);
    printf("The reverse of the number is %d", res);
    return 0;
}

int reverse(int num){
    int rev_num = 0, rem;
    
    while (num!=0)
    {
        rem = num%10;
        rev_num = rev_num*10 + rem;
        num/=10;
    }

    return rev_num;    
}

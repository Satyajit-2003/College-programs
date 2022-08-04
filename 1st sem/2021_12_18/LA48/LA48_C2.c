#include<stdio.h>

void reverse(int num);

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    reverse(num);
    return 0;
}

void reverse(int num){
    int rev_num = 0, rem;
    
    while (num!=0)
    {
        rem = num%10;
        rev_num = rev_num*10 + rem;
        num/=10;
    }

    printf("The reverse number is %d", rev_num);    
}

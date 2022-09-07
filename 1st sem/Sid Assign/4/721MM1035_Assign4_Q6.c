/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main(){
    int num, org, rev = 0, rem;
    printf("Enter the numer: ");
    scanf("%d", &num);
    org = num;

    while (num!=0)
    {
        rem = num%10;
        rev = ((rev*10)+rem);
        num/=10;
    }

    if (org == rev)
        printf("The number is a palindrome");
    else    
        printf("The number is not a palindrome");    
    
}
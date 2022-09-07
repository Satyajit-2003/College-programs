//Q10
//Palindrome number

#include<stdio.h>

int sum=0, rem;

int reverse(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse(num/10);
   }
   return sum;
}

_Bool is_palindrome(int num){
    if (num == reverse(num))
        return 1;
    return 0;    
}

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_palindrome(n))
        printf("%d is a palindrome", n);
    else    
        printf("%d is not a palindrome", n);

    return 0;
    
}
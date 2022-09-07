/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main(){
    int num,sum=0, temp, org;
    printf("Input the number: ");
    scanf("%d", &num);
    
    org = num;
    while (num!=0)
    {
        temp = num%10;
        sum+= (temp*temp*temp);
        num/=10;
    }

    if (org == sum)
        printf("It is an armstrong number");
    else
        printf("It is not an armstrong number");
    
    
}
/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main(){
    int last, sec_last, num, temp;
    sec_last = 0;
    last = 1;
    printf("Enter number of terms to display: ");
    scanf("%d", &num);

    if (num ==1)
    {
        printf("0");
        return 0;
    }
    printf("0\t1\t");
    if (num==2)
        return 0;

    for (int i = 0; i < num-2; i++)
    {
        temp = last + sec_last;
        sec_last = last;
        last = temp;
        printf("%d\t", temp);
    }   
    
}
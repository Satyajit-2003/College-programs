/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main()
{
    int sales;
    printf("Enter sales: ");
    scanf("%d", &sales);

    if (sales<1000)
        printf("No Commission");
    else if (sales<25000)
        printf("Commission is: %.2f", 0.1*sales);
    else
        printf("Commission is: %.2f", (200 + (sales-1000)*0.12));    
    

    return 0;
}

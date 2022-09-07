//Q6
//range of odd, even numbers

#include<stdio.h>

void print_num(int start, int end){
    if (start>end)
        return;
    
    printf("%d\t", start);
    int temp = start +2;
    print_num(temp, end);
}

int main()
{
    int start, end;
    printf("Input starting range: ");
    scanf("%d", &start);
    printf("Input ending range: ");
    scanf("%d", &end);
    if (start%2 == 0)
    {
        printf("Even numbers are: \n");
        print_num(start, end);
        printf("\nOdd numbers are: \n");
        print_num(start+1, end);
    }else{
        printf("Odd numbers are: \n");
        print_num(start, end);
        printf("\nEven numbers are: \n");
        print_num(start+1, end);
    }
    return 0;
}

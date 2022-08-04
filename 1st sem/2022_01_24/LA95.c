#include<stdio.h>

union ABC
{
    char a;
    int b;
    double c;
};

int main(){
    char a;
    int b;
    double c;
    union ABC obj;

    printf("Enter value for a: ");
    scanf("%c", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%lf", &c);

    printf("Printing after assigning:\n");
    obj.a = a;
    printf("a : %c\n", obj.a);
    obj.b = b;
    printf("b : %d\n", obj.b);
    obj.c = c;
    printf("c : %lf\n", obj.c);

    printf("Printing all at one:\n");
    obj.a = a;
    obj.b = b;
    obj.c = c;
    printf("a : %c\n", obj.a);
    printf("b : %d\n", obj.b);
    printf("c : %lf\n", obj.c);

    return 0;
}

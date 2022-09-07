#include<stdio.h>

struct data{
    int foot;
    int inch;
};

int main(){
    struct data d1, d2, d;

    printf("Enter data 1\n");
    printf("Enter foot: ");
    scanf("%d", &d1.foot);
    printf("Enter inch: ");
    scanf("%d", &d1.inch);

    printf("Enter data 2\n");
    printf("Enter foot: ");
    scanf("%d", &d2.foot);
    printf("Enter inch: ");
    scanf("%d", &d2.inch);

    d.foot = d1.foot + d2.foot;
    d.inch = d1.inch + d2.inch;

    if (d.inch > 12)
    {
        d.foot += 1;
        d.inch -= 12;
    }

    printf("Sum is: %d foot, %d inch", d.foot, d.inch);

    return 0;
    
}
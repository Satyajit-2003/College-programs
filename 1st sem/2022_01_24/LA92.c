#include<stdio.h>

struct data{
    int km;
    int m;
};

int main(){
    struct data d1,d2,d;

    printf("Enter data 1\n");
    printf("Enter km: ");
    scanf("%d", &d1.km);
    printf("Enter m: ");
    scanf("%d", &d1.m);

    printf("\nEnter data 2\n");
    printf("Enter km: ");
    scanf("%d", &d2.km);
    printf("Enter m: ");
    scanf("%d", &d2.m);

    d.km = d1.km + d2.km;
    d.m = d1.m + d2.m;

    if (d.m > 1000){
        d.km += 1;
        d.m -= 1000;
    }

    printf("Sum is %dkm %dm", d.km, d.m);

    return 0;
}
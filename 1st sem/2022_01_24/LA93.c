#include<stdio.h>

struct time{
    int hour;
    int min;
    int sec;
};

void add(struct time d1, struct time d2);

int main(){
    struct time d1,d2;

    printf("Enter time 1\n");
    printf("Enter hours: ");
    scanf("%d", &d1.hour);
    printf("Enter minutes: ");
    scanf("%d", &d1.min);
    printf("Enter seconds: ");
    scanf("%d", &d1.sec);
    

    printf("\nEnter data 2\n");
    printf("Enter hours: ");
    scanf("%d", &d2.hour);
    printf("Enter minutes: ");
    scanf("%d", &d2.min);
    printf("Enter seconds: ");
    scanf("%d", &d2.sec);

    add(d1, d2);

    return 0;
}

void add(struct time d1, struct time d2){
    struct time d;

    d.hour = d1.hour + d2.hour;
    d.min = d1.min + d2.min;
    d.sec  = d1.sec + d2.sec;

    if(d.sec > 60){
        d.min += 1;
        d.sec -= 60;
    }

    if (d.min > 60){
        d.hour += 1;
        d.min -= 60;
    }

    printf("Sum is %d hours, %d minutes, %d seconds", d.hour, d.min, d.sec);
}
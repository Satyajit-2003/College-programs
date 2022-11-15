#include<stdio.h>

int main(){
    double perc;
    int total, absent, temp;
    temp = absent;

    printf("Enter total classes till now: ");
    scanf("%d", &total);
    printf("Enter classes you are absent in: ");
    scanf("%d", &absent);
    perc = ((double)(absent/total))*100;
    while (perc <= 25){
        absent++;
        total++;
        perc = ((double)(absent/total))*100;
        printf("%lf \t", perc);
    }

    printf("You can be absent in %d more classes", absent-temp);
}
#include<stdio.h>

int main()
{
    int sec;
    printf("Enter time in seconds: ");
    scanf("%d",&sec);
    int hour = sec/3600;
    int temp = sec%3600;
    int min = temp/60;
    int second = temp%60;
    printf("The time is %d hours %d minutes %d seconds \n",hour,min,second);

    return 0;
}
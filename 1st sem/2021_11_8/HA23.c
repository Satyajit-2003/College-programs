#include<stdio.h>

int main()
{
    int h1,m1,s1,h2,m2,s2,h3,m3,s3;
    printf("Enter 1st time :");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("Enter 2nd time :");
    scanf("%d:%d:%d",&h2,&m2,&s2);

    s3 = s1+s2;
    int extra_min = s3/60;
    s3 %= 60;

    m3 = m1+m2+extra_min;
    int extra_hour = m3/60;
    m3 %= 60;
    
    h3 = h1+h2+extra_hour;

    printf("The sum of times is %d hours, %d mins, %d seconds\n",h3,m3,s3);
    return 0;
}
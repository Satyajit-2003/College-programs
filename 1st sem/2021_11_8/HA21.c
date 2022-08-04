#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter value of m1: ");
    scanf("%d",&m1);
    printf("Enter value of m2: ");
    scanf("%d",&m2);
    printf("Enter value of m3: ");
    scanf("%d",&m3);
    printf("Enter value of m4: ");
    scanf("%d",&m4);
    printf("Enter value of m5: ");
    scanf("%d",&m5);
    int sum = m1+m2+m3+m4+m5;
    float percent = ((float)sum/(float)500)*100;
    printf("The average of marks is is %.2f \n",percent);

    return 0;
}

#include<stdio.h>

int main()
{
    int pai;
    printf("Enter value in paisa: ");
    scanf("%d",&pai);
    int rup = pai/100;
    int pa = pai%100;
    printf("The denomination is %d rupees %d paisa \n",rup,pa);

    return 0;
}
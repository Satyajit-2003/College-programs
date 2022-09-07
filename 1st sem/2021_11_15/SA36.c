#include<stdio.h>

int main()
{
    int grade,point ;
    printf("Enter Mark :");
    scanf("%d",&grade);

    point = grade/10;

    switch (point)
    {
    case 10:
    case 9:
        printf("Grade is O");
        break;
    case 8:
        printf("Grade is E");
        break;
    case 7:
        printf("Grade is A");
        break;
    case 6:
        printf("Grade is E");
        break;
    case 5:
        printf("Grade is C");
        break;
    case 4:
        printf("Grade is D");
        break;
    default:
        printf("FAIL");
    }


    printf("\n");

    return 0;
}

#include<stdio.h>

int main()
{
    int ans;
    printf("Choose your option\n1:Square\n2:Rectangle\n3:Circle\n");
    scanf("%d",&ans);

    if (ans == 1)
    {
        int side;
        printf("Enter side: ");
        scanf("%d",&side);
        printf("Area is %d",side*side);
    }

    else if (ans == 2)
    {
        int len,bre;
        printf("Enter length: ");
        scanf("%d",&len);
        printf("Enter bredth: ");
        scanf("%d",&bre);
        printf("Area of the rectangle is %d",len*bre);
    }

    else if (ans == 3)
    {
        int rad;
        printf("Enter radius: ");
        scanf("%d",&rad);
        printf("Area of circle is %.2f",3.14*rad*rad);
    }   
    
    return 0;
}

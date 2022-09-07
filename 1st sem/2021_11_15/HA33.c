#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,dis_76;
    float x1,x2;
    
    printf("Input a: ");
    scanf("%d",&a);

    printf("Input b: ");
    scanf("%d",&b);

    printf("Input c: ");
    scanf("%d",&c);

    dis_76 = (b*b)-(4*a*c);
    
    switch (dis_76)
    {
    case 0:
    {   
        x1 = x2 = -b/(2*a);
        printf("The roots are equal %.2f and %.2f\n",x1,x2);
        break;
    }
    
    default:
    {
        switch (dis_76>0)
        {
        case 1:
        {
            x1 = (-b+sqrt(dis_76))/(4*a*c);
            x2 = (-b-sqrt(dis_76))/(4*a*c);
            printf("The roots are real and dis_76tinct %.2f and %.2f\n",x1,x2);
            break;
        }
        case 0:
        {
            printf("The root are imaginary");
            float real=-b/(2.0*a);
            dis_76=-dis_76;
            float imag=sqrt(dis_76)/(2.0*a);
            printf("\nRoot1 =%5.2f + %5.2fi",real, imag);
            printf("\nRoot2 =%5.2f - %5.2fi\n",real, imag);
        }
        }
    }

    }
}

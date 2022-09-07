#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float x1,x2,dis;
    
    printf("Input a: ");
    scanf("%d",&a);

    printf("Input b: ");
    scanf("%d",&b);

    printf("Input c: ");
    scanf("%d",&c);

    dis = (b*b)-(4*a*c);
    
    if (dis == 0)
    {
        x1 = x2 = -b/(2*a);
        printf("The roots are equal %.2f and %.2f\n",x1,x2);
    }

    else if (dis>0)
    {
        x1 = (-b+sqrt(dis))/(4*a*c);
        x2 = (-b-sqrt(dis))/(4*a*c);
        printf("The roots are real and distinct %.2f and %.2f\n",x1,x2);

    }
    else
    {
        printf("The root are imaginary");
        float real=-b/(2.0*a);
        dis=-dis;
        float imag=sqrt(dis)/(2.0*a);
        printf("\nRoot1 =%5.2f + %5.2fi",real, imag);
        printf("\nRoot2 =%5.2f - %5.2fi\n",real, imag);
    }
        
    return 0;
}

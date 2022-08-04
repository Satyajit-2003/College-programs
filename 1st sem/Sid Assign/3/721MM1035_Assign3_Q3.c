/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c, dis;

    printf("The equation is of type ax^2 + bx + c = 0\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    dis = ((b*b)-(4*a*c));

    if (dis>0){        
        float root1, root2;
        root1 = ((-b+sqrt(dis))/(2*a));
        root2 = ((-b-sqrt(dis))/(2*a));

        printf("The roots are real and distinct \n%.2f and %.2f", root1, root2);
    }
    
    else if (dis == 0){       
        float root1, root2;
        root1 = root2 = (-b/(2.0*a));
        
        printf("The roots are real and equal \n%.2f and %.2f", root1, root2);        
    }

    else{
        float real, imag;
        real = (-b/(2.0*a));
        dis = -dis;
        imag = (sqrt(dis)/(2*a));

        printf("The roots are imaginary\n");
        printf("%.2f + %.2fi and ", real, imag);
        printf("%.2f - %.2fi", real, imag);
    }
    
    return 0;
}


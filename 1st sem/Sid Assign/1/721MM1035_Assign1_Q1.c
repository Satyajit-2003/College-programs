/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>
#include<math.h>

int main(){
    float x_1,y_1,x_2,y_2, distance;
    printf("Enter X_1: ");
    scanf("%f", &x_1);

    printf("Enter Y_1: ");
    scanf("%f", &y_1);

    printf("Enter X_2: ");
    scanf("%f", &x_2);

    printf("Enter Y_2: ");
    scanf("%f", &y_2);
    
    distance = ( ((x_1-x_2)*(x_1-x_2)) - ((y_1-y_2)*(y_1-y_2)) );

    printf("The square of distance between the points is %f\n", distance);
    printf("The distance between the points is %f", sqrt(distance));


    return 0;
}

#include<stdio.h>

void sel_sch();
void sch2();
int get_grade(int mark){
    switch (mark/10)
    {
    case 10:
    case 9:
        return 10;
    case 8: 
        return 9;
    case 7:
        return 8;
    case 6:
        return 7;
    case 5:
        return 6;
    case 4:
        return 5;
    case 3:
    case 2:
    case 1:
    case 0:
        printf("You have failed\n");
        return 2;
    default:
        printf("Wrong marks, adding a zero\n");
        return 0;
    }
}

int main(){
    sel_sch();
    return 0;
}

void sel_sch(){
    int sch;
    printf("\nEnter your scheme:\n1 for Scheme 1\n2 for scheme 2:  ");

    scanf("%d", &sch);

    switch (sch)
    {
    case 1:
        // sch1():
        break;
    
    case 2:
        sch2();
        break;
    
    default:
        printf("Wrong choice\nLet's try again\n\n");
        sel_sch();
        break;
    }
}

void sch2(){
    float total = 0, cred = 19.5;
    int m1, chem, pcom, bio, clab, cplab, langlab, eg;
    printf("Enter your marks accordingly, internal + end sem\nIf not known enter expected marks \n\n");

    printf("Enter marks in maths I: ");
    scanf("%d", &m1);
    total += get_grade(m1) * 4;

    printf("Enter marks in chemistry: ");
    scanf("%d", &chem);
    total += get_grade(chem) * 3;

    printf("Enter marks in professional communication: ");
    scanf("%d", &pcom);
    total += get_grade(pcom) * 2;

    printf("Enter marks in biology: ");
    scanf("%d", &bio);
    total += get_grade(bio) * 2;

    printf("Enter marks in chemistry lab: ");
    scanf("%d", &clab);
    total += get_grade(clab) * 1.5;

    printf("Enter marks in C Programming Lab: ");
    scanf("%d", &cplab);
    total += get_grade(cplab) * 4;

    printf("Enter marks in language lab: ");
    scanf("%d", &langlab);
    total += get_grade(langlab) * 1;

    printf("Enter marks in engineering graphics: ");
    scanf("%d", &eg);
    total += get_grade(eg) * 2;

    float cgpa = total/ 19.5;

    printf("Your total expected SGPA is %.2f", cgpa);

}

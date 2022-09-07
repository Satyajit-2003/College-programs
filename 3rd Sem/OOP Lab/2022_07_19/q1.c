#include<stdio.h>

//WAP to store one student’s information (i.e. 
//student’s roll no, name, gender, marks etc) of an educational institute and 
//display all the data, using structure.

struct student
{
    int roll;
    char name[20];
    char gender;
    int marks;
};

int main(){
    struct student s1;

    printf("Enter student name: ");
    gets(s1.name);
    printf("Enter Roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter gender: ");
    scanf("%c", &s1.gender);
    scanf("%c", &s1.gender);
    printf("Enter marks: ");
    scanf("%d", &s1.marks);


    printf("\n\nName is : ");
    puts(s1.name);
    printf("Roll number is : %d", s1.roll);
    printf("\nGender is : %c", s1.gender);
    printf("\nMarks is : %d", s1.marks);

    return 0;

}
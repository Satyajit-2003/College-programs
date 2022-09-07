#include<stdio.h>

struct student
{
    int roll_no;
    char name [50];
    char gender;
    int marks;
};

int main(){
    struct student st;
    printf("Enter roll no: ");
    scanf("%d", &st.roll_no);
    printf("Enter name: ");
    gets(st.name);
    gets(st.name);
    printf("Enter gender: ");
    scanf("%c", &st.gender);
    printf("Enter marks: ");
    scanf("%d", &st.marks);

    printf("The student details are: \n");
    printf("Roll no : %d\n", st.roll_no);
    printf("Name: %s\n", st.name);
    printf("Gender : %c\n", st.gender);
    printf("Marks : %d\n", st.marks);

    return 0;

}

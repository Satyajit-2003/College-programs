#include<stdio.h>

struct student
{
    int roll_no;
    char name [50];
    char gender;
    int marks;
};

int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i+1);
        printf("Enter roll no: ");
        scanf("%d", &arr[i].roll_no);

        printf("Enter name: ");
        gets(arr[i].name);
        gets(arr[i].name);

        printf("Enter gender: ");
        scanf("%c", &arr[i].gender);

        printf("Enter marks: ");
        scanf("%d", &arr[i].marks);        
    }


    printf("\nStudents in roll num order: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll Number : %d\n", arr[i].roll_no);
        printf("Name : %s\n", arr[i].name);
        printf("Gender : %c\n", arr[i].gender);
        printf("Marks : %d\n\n", arr[i].marks);        
    }    

    return 0;
}
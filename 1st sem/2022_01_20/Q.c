#include<stdio.h>

struct student
{
    int roll_no;
    char f_name[20];
    char l_name[20];
};

int main(){

    struct student arr[5];
    struct student temp;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for student %d\n", i+1);
        printf("Enter roll no: ");
        scanf("%d", &arr[i].roll_no);

        printf("Enter first name: ");
        gets(arr[i].f_name);
        gets(arr[i].f_name);

        printf("Enter last name: ");
        gets(arr[i].l_name);        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i].roll_no > arr[j].roll_no)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }            
        }        
    }

    printf("Stdents in roll num order: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Roll Number : %d\n", arr[i].roll_no);
        printf("First Name : %s\n", arr[i].f_name);
        printf("Last Name : %s\n\n", arr[i].l_name);        
    }    

    return 0;
}
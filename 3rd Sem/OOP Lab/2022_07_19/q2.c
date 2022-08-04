#include<stdio.h>

//Define a structure to store the employee name, id, date of birth, basic salary of an employee. 
//WAP to store 10 employee details using function. Display the employee information having highest salary.

struct empl
{
    char name[20];
    int id;
    char dob[10];
    int salary;
};

struct empl emp[3];

void input_data(){
    for (int i = 0; i < 3; i++)
    {
        printf("\n\nEnter details for employee %d\n", i+1);
        printf("Enter employee name: ");
        gets(emp[i].name);
        if (i!=0)
            gets(emp[i].name);
        printf("Enter employee id: ");
        scanf("%d", &emp[i].id);
        printf("Enter employee date of birth: ");
        gets(emp[i].dob);
        gets(emp[i].dob);
        printf("Enter salary: ");
        scanf("%d", &emp[i].salary);
    }
}

void print_highst(){
    int high_id = 0;
    for (int i = 0; i < 3; i++)
    {
        if (emp[high_id].salary < emp[i].salary)
            high_id = i ;      
    }

    printf("\nHighest salary employee: \n");
    printf("Employee name: ");
    puts(emp[high_id].name);
    printf("Employee id : %d \n", emp[high_id].id);
    printf("Employee DOB : ");
    puts(emp[high_id].dob);
    printf("Employee salary: %d \n", emp[high_id].salary);    

}

int main(){ 

    input_data();
    print_highst();

    return 0;
}

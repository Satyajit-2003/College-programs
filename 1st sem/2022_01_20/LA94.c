#include<stdio.h>

struct employee{
    char name[30];
    char gender;
    char desig[10];
    char depart[10];
    int basic_pay;
};

int main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct employee arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details of employee %d: \n", i+1);
        printf("Enter name: ");
        gets(arr[i].name);
        gets(arr[i].name);

        printf("Enter gender: ");
        scanf("%c", &arr[i].gender);

        printf("Enter designation: ");
        gets(arr[i].desig);
        gets(arr[i].desig);

        printf("Enter department: ");
        gets(arr[i].depart);

        printf("Enter basic pay: ");
        scanf("%d", &arr[i].basic_pay);
        printf("\n");
    }

    printf("Gross pay of employees: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee name: %s\n", arr[i].name);
        printf("Gross pay: %d\n\n", arr[i].basic_pay+((25+75)/100)*arr[i].basic_pay);
    }
    return 0;
}
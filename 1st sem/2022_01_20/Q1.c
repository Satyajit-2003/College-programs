#include<stdio.h>

struct employee
{
    char name[20];
    char address[50];
    int age;
    int salary;
};

int main(){
    int n, sum = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter details for employee %d:\n", i+1);
        printf("Enter name: ");
        gets(arr[i].name);
        gets(arr[i].name);

        printf("Enter address: ");
        gets(arr[i].address);
        
        printf("Enter age: ");
        scanf("%d", &arr[i].age);

        printf("Enter salary: ");
        scanf("%d", &arr[i].salary);
    }

    for (int i = 0; i < n; i++)
        sum += arr[i].salary;
    
    printf("Average slary: %.2f", sum/(float)n);

    return 0;
}
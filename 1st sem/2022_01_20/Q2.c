#include<stdio.h>
#include<string.h>

struct employee{
    char name[20];
    char address[50];
    int salary;
};

int main(){
    struct employee arr[5];
    struct employee temp;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter deails for employess %d:\n", i+1);
        printf("Enter name: ");
        if (i != 0)
            gets(arr[i].name);
        gets(arr[i].name);

        printf("Enter address: ");
        gets(arr[i].address);

        printf("Enter salary: ");
        scanf("%d", &arr[i].salary);
        printf("\n");
    }

   	for (int i = 0; i < 5; i++)
	{
        for (int j = 0; arr[i].name[j] != '\0'; j++)
        {
            if (arr[i].name[j] >= 65 && arr[i].name[j] <= 90)
                arr[i].name[j] += 32;            
        }        
	}

    for (int i = 0; i < 5; i++)
    {;
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (strcmp(arr[j].name, arr[j+1].name) > 0)
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }            
        }        
    }

    printf("\nDetails of employees sorted according to names\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s\n", arr[i].name);
        printf("Address: %s\n", arr[i].address);
        printf("Salary: %d\n\n", arr[i].salary);
    }
    

    return 0;
}
#include <stdio.h>

//Structure to store bill details of a customer
struct WaterBill
{
    int div_name;
    int consumer_id;
    int dd;
    int mm;
    int yy;
    char name[20];
    char type[10];
    char bill_no[20];
    char rr_no[10];
    char address[100];
    int present_reading;
    int previous_reading;
    int consumption;
    int water_charges;
    int meter_charges;
    int total_amt
};

//Function to take input and give output of water bill details
void bill()
{
    int n, i;
    printf("Enter the number of persons: ");
    scanf("%d", &n);

    //Declaring array of defined structure data type to store details of cutomers
    struct WaterBill wb[n];

    //Loop runs for each customer
    for (i = 0; i < n; i++)
    {
        //Taking input for each input
        printf("\nEnter the details of person %d\n", i+1);
        printf("DIVSION NUMBER: ");
        scanf("%d", &wb[i].div_name);
        printf("CONSUMER ID: ");
        scanf("%d", &wb[i].consumer_id);
        printf("DATE: ");
        scanf("%d", &wb[i].dd);
        printf("MONTH: ");
        scanf("%d", &wb[i].mm);
        printf("YEAR: ");
        scanf("%d", &wb[i].yy);
        fflush(stdin);
        printf("CONSUMER NAME: ");
        gets(wb[i].name);
        printf("CONSUMER TYPE: ");
        gets(wb[i].type);
        printf("BILL NO.: ");
        gets(wb[i].bill_no);
        printf("RR. NO.: ");
        gets(wb[i].rr_no);
        printf("ADDRESS: ");
        gets(wb[i].address);
        printf("PRESENT READING: ");
        scanf("%d", &wb[i].present_reading);
        printf("PREVIOUS READING: ");
        scanf("%d", &wb[i].previous_reading);
        printf("WATER CHARGES: ");
        scanf("%d", &wb[i].water_charges);
        printf("METER CHARGES: ");
        scanf("%d", &wb[i].meter_charges);
        //Calculating the meter reading
        wb[i].consumption = wb[i].present_reading - wb[i].previous_reading;
        //calculating and storing total amount
        wb[i].total_amt = wb[i].water_charges + wb[i].meter_charges;
    }

    for (i = 0; i < n; i++)
    {
        //Printing water bill of each customer in loop
        printf("BILL : %d\n\n", i+1);
        printf("-----------WATER SUPPLY AND SEWAGE BOARD-----------\n\n\n");
        printf("DIVSION NUMBER: %d \n", wb[i].div_name);
        printf("CONSUMER ID: %d\n", wb[i].consumer_id);
        printf("DATE:%d/%d/%d \n", wb[i].dd, wb[i].mm, wb[i].yy);
        printf("CONSUMER NAME: %s\n", wb[i].name);
        printf("CONSUMER TYPE: %s\n", wb[i].type);
        printf("BILL NO.: %s\n", wb[i].bill_no);
        printf("RR. NO.: %s\n", wb[i].rr_no);
        printf("ADDRESS: %s\n", wb[i].address);
        printf("PRESENT READING: %d\n", wb[i].present_reading);
        printf("PREVIOUS READING: %d\n", wb[i].previous_reading);
        printf("CONSUMPTION: %d\n", wb[i].consumption);
        printf("------PAYMENT DETAILS------\n\n\n");
        printf("WATER CHARGES: %d\n", wb[i].water_charges);
        printf("METER CHARGES: %d\n", wb[i].meter_charges);
        printf("TOTAL AMOUNT: %d\n", wb[i].total_amt);
    }
}

int main()
{
    //Calling the fuction defined above
    bill();
    return 0;
}
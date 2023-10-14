#include<stdio.h>

typedef struct std_info{
    int roll;
    char name[20];
    float cgpa;
    struct dob{
        int day;
        int month;
        int year;
    }dob;
}std;

void print_by_value(std std_info){
    printf("Printing by value:\n");
    printf("Roll: %d\n", std_info.roll);
    printf("Name: %s\n", std_info.name);
    printf("CGPA: %f\n", std_info.cgpa);
    printf("DOB: %d/%d/%d\n", std_info.dob.day, std_info.dob.month, std_info.dob.year);
}

void print_by_pointer(std *std_info){
    printf("Printing by pointer:\n");
    printf("Roll: %d\n", std_info->roll);
    printf("Name: %s\n", std_info->name);
    printf("CGPA: %f\n", std_info->cgpa);
    printf("DOB: %d/%d/%d\n", std_info->dob.day, std_info->dob.month, std_info->dob.year);
}

int main(){
    std std_info;
    std_info.roll = 1;
    std_info.cgpa = 3.5;
    std_info.dob.day = 1;
    std_info.dob.month = 1;
    std_info.dob.year = 2000;
    std_info.name[0] = 'A';

    
    print_by_value(std_info);
    print_by_pointer(&std_info);
    return 0;
}
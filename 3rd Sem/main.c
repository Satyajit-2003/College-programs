#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

int main(){
    struct emploee{
        int empid[5];
        int salary;
        struct emploee *s;
    }emp;
    printf("%d %d %d", sizeof(struct emploee), sizeof(emp.empid), sizeof(int));

    return 0;

}


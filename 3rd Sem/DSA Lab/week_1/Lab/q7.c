#include<stdio.h>
#include<stdlib.h>

//Let A be nXn square dynamic matrix. WAP by using appropriate user defined functions for the following:

//a) Find the number of nonzero elements in A
int non_zero(int* arr, int len);
//b) Find the sum of the elements above the leading diagonal.
int sum_abve_major(int* arr, int len);
//c) Display the elements below the minor diagonal.
void disp_below_minor(int* arr, int len);
//d) Find the product of the diagonal elements.
int diag_prod(int *arr, int len);

int main(){
    int len;
    int* arr;
    printf("Enter the rows and columns of the square matrix: ");
    scanf("%d", &len);

    arr = (int *)malloc(len*len*sizeof(int));

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            *(arr+(len*i)+j) = rand()%10;
            printf("%d ", *(arr+ (len*i + j) ));
        }
        printf("\n");
    } 

    printf("Number of non-zero elements: %d\n", non_zero(arr, len));
    printf("Sum of elements above major diagonal: %d\n", sum_abve_major(arr, len));
    printf("Elements below minor diagonal: \n");
    disp_below_minor(arr, len);
    printf("Product of diagonal elements : %d", diag_prod(arr, len));


    return 0;
}

int non_zero(int* arr, int len){
    int res = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
           if (*(arr+ (len*i) + j) != 0)
            res++;
        }
    } 
    return res;
}

int sum_abve_major(int* arr, int len){
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i<j)
                sum += *(arr+ (len*i) +j);
        }
    }
    
    return sum;
}

void disp_below_minor(int* arr, int len){
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (j > len-i-1)
                printf("%d ", *(arr + (len*i)+ j));
            else   
                printf("  ");
        }
        printf("\n");
    }    
}

int diag_prod(int *arr, int len){
    int prod = 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i == j)
                prod *= *(arr + (len*i) + j);
            if (j == len-i-1 && i != j)
                prod *= *(arr + (len*i) + j);
        }        
    }

    return prod;    
}


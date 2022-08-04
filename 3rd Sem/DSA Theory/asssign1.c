#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Structure to store points
struct points
{
    int x;
    int y;
};

//declaring array of points Globally
struct points arr_of_points[10];

//Function to check if given square matrix is symettric
int is_symettric(float **matrix, int size);

int main(){
    // Giving random integers to the points
    for (int i = 0; i < 10; i++)
    {
        arr_of_points[i].x = rand()%100;
        arr_of_points[i].y = rand()%100;
    }

    //Printing the points
    printf("The point are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("(%d,%d)\n", arr_of_points[i].x, arr_of_points[i].y);
    }    

    //Dynamically creating distance matrix of size 10x10
    float **dist_matrix = (float **)malloc(10 * sizeof(float *));
    for(int i = 0; i < 10; i++){
        dist_matrix[i] = (float *)malloc(10 * sizeof(float));
    }

    //Calculating distance between each point and storing it in the distance matrix
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)    
        {
            float dist = sqrt(
                pow((arr_of_points[j].y - arr_of_points[i].y) , 2) +  //(y1-y2) ^2
                pow((arr_of_points[j].x - arr_of_points[i].x) , 2)    //(x2-x1) ^2
                ); 
            dist_matrix[i][j] = dist;
        }
    }

    //Checking if distance matrix is symettric
    if (is_symettric(dist_matrix, 10))
        printf("\nThe matrix is symettric, we can go ahead....\n");
    else{
        printf("Matrix isn't symettric, something's erong.\nTerminating....");
        exit(1);  //Exiting proram with error code if the matrix is not symettric
    }

    //Printing the distances
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            printf("%.2f  ", dist_matrix[i][j]);
        printf("\n");
    }

    struct points p1, p2;
    float min_dist = dist_matrix[1][0];

    //Checking the lower half of major diagonal for smallest element
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (dist_matrix[i][j] < min_dist){
                min_dist = dist_matrix[i][j];
                p1 = arr_of_points[i];
                p2 = arr_of_points[j];
            }
        }        
    }
    
    printf("\nThe pair of points having minimum distance between each other are (%d, %d) and (%d,%d)\n", p1.x, p1.y, p2.x, p2.y);
    printf("Distance between them is: %.4f units", min_dist);

    return 0;
}

//Function to check if given square matrix is symettric
int is_symettric(float **matrix, int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j] != matrix[j][i])
                return 0;
        }
    }
    return 1;    
}
#include <stdio.h>
#include <time.h>
 
void my_function(){
    /* Body of function */
    float f;
    for(f=0.0; f<10000; f=f+1.0);
}
int main() {
    clock_t start, end;
    /* Store time before function call */
    start = clock();
    my_function();
    /* Store time after function call */
    end = clock();
    /* Get the time taken by program to execute in seconds */
    double duration = ((double)end - start)/CLOCKS_PER_SEC;
     
    printf("Time taken to execute in seconds : %f", duration);
    return 0;
}
// Write a program to create two threads where 
// one thread adds half of the element from the beginning of the array 
// and another thread add half of the element from the end of the array. 
// And at the end main process shows the sum of all the elements in the given array.

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int n, sum = 0;
int* arr;
pthread_mutex_t mutex;

void* add_array(void* arg){
    int part = *(int*)arg;
    for (int i = 0; i < n/2; i++){
        pthread_mutex_lock(&mutex);
        sum += arr[part+i];
        pthread_mutex_unlock(&mutex);
    }
}


int main(){
    printf("Enter size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    int a = 0;
    int b = n/2;

    pthread_t th1, th2;
    pthread_mutex_init(&mutex, NULL);
    pthread_create(&th1, NULL, add_array, (void*)&a);
    pthread_create(&th2, NULL, add_array, (void*)&b);

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);

    printf("Sum is: %d", sum);

    pthread_mutex_destroy(&mutex);
}
//Increment and decrement value of global variable x using 2 diff functions having diff threads

#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

sem_t s1;
int x = 3;

void* f1(){
    sem_wait(&s1);
    x++;
    sem_post(&s1);
}

void* f2(){
    sem_wait(&s1);
    x--;
    sem_post(&s1);
}

int main(){
    pthread_t th1, th2;

    sem_init(&s1, 0, 1);
    pthread_create(&th1, NULL, f1, NULL);
    pthread_create(&th2, NULL, f2, NULL);

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);

    printf("%d", x);
}

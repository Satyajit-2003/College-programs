#include<stdio.h>
#include<pthread.h>

void* thread_func(){
    for (int i = 0; i < 1000; i++){
        printf("%d ", i);
    }
}

int main(){
    pthread_t pt1, pt2;

    pthread_create(&pt1, NULL, thread_func, NULL);
    pthread_create(&pt2, NULL, thread_func, NULL);

    pthread_join(pt1, NULL);
    pthread_join(pt2, NULL);

    return 0;
}
#include<stdio.h>
#include<pthread.h>
#include<windows.h>

void* f1(void* arg){
    while (1){
        printf("f1");
        Sleep(1);
    }
    return NULL;
}

void* f2(void* arg){
    while (1){
        printf("f2");
        Sleep(1);
    }
    return NULL;
}


int main(){
    

    pthread_t t1, t2;

    pthread_create(&t1, NULL, f1, NULL);
    pthread_create(&t2, NULL, f2, NULL);


}
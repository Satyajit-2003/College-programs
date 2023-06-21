//Write a program to implement the merge sort using multiple threads.

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<time.h>

typedef struct parameters{
    int* arr;
    int start;
    int end;
} param;

void merge(int *a,int i1,int j1,int i2,int j2)
{
    int temp[1000];    
    int k = 0;
    int i=i1;
    int j=i2;
    
    while(i<=j1 && j<=j2)    
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    
    while(i<=j1)    
        temp[k++]=a[i++];
        
    while(j<=j2)
        temp[k++]=a[j++];
        
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}

void* merge_sort(void* args){
    param p = *(param *)args;
    int mid = (p.start+p.end)/2;
    if (p.start < p.end){    

        pthread_t th1, th2;
        
        param *p1 = (param*) malloc(sizeof(param));
        p1->arr = p.arr;
        p1->start = p.start;
        p1->end = mid;

        param *p2 = (param*) malloc(sizeof(param));
        p2->arr = p.arr;
        p2->start = mid+1;
        p2->end = p.end;

        pthread_create(&th1, NULL, merge_sort, (void *)p1);
        pthread_create(&th2, NULL, merge_sort, (void *)p2);

        pthread_join(th1, NULL);
        pthread_join(th2, NULL);
    }

    merge(p.arr, p.start, mid, mid+1, p.end);

    return NULL;
}

int main(){
    srand(time(0));
    int n = 20;

    int* arr = (int *)malloc(n* sizeof(int));

    for (int i = 0; i < n; i++){
        arr[i] = rand()%100;
        printf("%d ", arr[i]);
    }
    printf("\n");

    param* p = (param *) malloc(sizeof(param));

    p->arr = arr;
    p->start = 0;
    p->end = n+1;
    pthread_t th;

    pthread_create(&th, NULL, merge_sort, (void *)p);
    pthread_join(th, NULL);

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
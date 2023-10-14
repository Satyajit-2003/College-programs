#include<stdio.h>
#include<stdlib.h>

typedef struct activity{
    int start;
    int end;
} act;

void sort(act* arr, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j].end > arr[j+1].end){
                act temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    printf("Enter number of activities: ");
    scanf("%d", &n);

    act* act_arr = (act *) malloc(n * sizeof(act));

    for (int i = 0; i < n; i++){
        printf("Enter start and end of activity %d:", i+1);
        scanf("%d %d", &act_arr[i].start, &act_arr[i].end);
    }

    sort(act_arr, n);

    int j = 0;
    printf("Selected activities: ");
    printf("%d ", 1);

    for (int i = 1; i < n; i++){
        if (act_arr[i].start >= act_arr[j].end){
            printf("%d ", i+1);
            j = i;
        }
    }

    return 0;
}
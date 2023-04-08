#include<stdio.h>
#include<stdlib.h>

typedef struct pro{
    int process_id;
    int arrival_time;
    int burst_time;
    int completion_time;
    int turn_around_time;
    int response_time;
    int waiting_time;
    int burst_time_copy;
} process;

int main(){
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    process p[n];
    for (int i = 0; i < n; i++){
        printf("Enter arrival time of process %d: ", i+1);
        scanf("%d", &p[i].arrival_time);
        printf("Enter burst time of process %d: ", i+1);
        scanf("%d", &p[i].burst_time);
        p[i].process_id = i+1;
        p[i].burst_time_copy = p[i].burst_time;
        p[i].response_time = -1;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (p[j].arrival_time > p[j+1].arrival_time){
                process temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }

    int cpu_time = 0;
    int done = 0;    

    while (done < n){
        int min = 100000;
        int min_index = -1;
        for (int i = 0; i < n; i++){
            if (p[i].arrival_time <= cpu_time && p[i].burst_time < min && p[i].burst_time > 0){
                min = p[i].burst_time;
                min_index = i;
            }
        }
        if (min_index == -1){
            cpu_time++;
            continue;
        }
        if (p[min_index].response_time == -1){
            p[min_index].response_time = cpu_time - p[min_index].arrival_time;
        }
        p[min_index].burst_time--;
        if (p[min_index].burst_time == 0){
            p[min_index].completion_time = cpu_time + 1;
            p[min_index].turn_around_time = p[min_index].completion_time - p[min_index].arrival_time;
            p[min_index].waiting_time = p[min_index].turn_around_time - p[min_index].burst_time_copy;
            done++;
        }
        cpu_time++;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (p[j].process_id > p[j+1].process_id){
                process temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }

    printf("Process ID\tArrival Time\tBurst Time\tCompletion Time\tTurn Around Time\tWaiting Time\tResponse Time\n");

    for (int i = 0; i < n; i++){
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t%d\n", p[i].process_id, p[i].arrival_time, p[i].burst_time_copy, p[i].completion_time, p[i].turn_around_time, p[i].waiting_time, p[i].response_time);
    }

}
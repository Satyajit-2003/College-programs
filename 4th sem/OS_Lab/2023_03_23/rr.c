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
    int bursting;
} process;

int main(){
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    process p[n];
    int * completed = (int * ) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++){
        printf("Enter arrival time of process %d: ", i+1);
        scanf("%d", &p[i].arrival_time);
        printf("Enter burst time of process %d: ", i+1);
        scanf("%d", &p[i].burst_time);
        p[i].process_id = i+1;
        p[i].response_time = -1;
        p[i].bursting = p[i].burst_time;
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
    int time_quantum = 2;
    int flag = 0;
    int done  = 0;

    while (done < n)
    {
        if (completed[flag]){
            flag = (flag+1)%n;
            continue;
        }
        if (p[flag].response_time == -1){
            if (cpu_time == 0){
                p[flag].response_time = 0;
                p[flag].waiting_time = 0;
            }
            else{
                p[flag].response_time = cpu_time - p[flag].arrival_time;
                p[flag].waiting_time = p[flag].response_time;
            }
            if (cpu_time < p[flag].arrival_time){
                cpu_time = p[flag].arrival_time;
            }
        }
        if (p[flag].bursting > time_quantum){
            cpu_time += time_quantum;
            p[flag].bursting -= time_quantum;
        }
        else{
            cpu_time += p[flag].bursting;
            p[flag].bursting = 0;
            p[flag].completion_time = cpu_time;
            p[flag].turn_around_time = p[flag].completion_time - p[flag].arrival_time;
            p[flag].waiting_time += p[flag].turn_around_time - p[flag].burst_time;
            completed[flag] = 1;
            done++;
        }
        flag = (flag+1)%n;
    }
    printf("\n");
    
    
    for (int i = 0; i < n; i++){
        if (p[i].arrival_time > cpu_time){
            cpu_time = p[i].arrival_time;
        }
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
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t%d\n", p[i].process_id, p[i].arrival_time, p[i].burst_time, p[i].completion_time, p[i].turn_around_time, p[i].waiting_time, p[i].response_time);
    }

}
#include<stdio.h>
#include<stdlib.h>

typedef struct it{
    int weight;
    int profit;
    float ratio;
} item;

int main(){
    int capacity;
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);

    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    item* items = (item*)malloc(n*sizeof(item));

    for(int i=0; i<n; i++){
        printf("Enter the weight and profit of item %d:\n", i+1);
        scanf("%d %d", &items[i].weight, &items[i].profit);
        items[i].ratio = (float)items[i].profit / items[i].weight;
    }

    // Using profits only
    // Sorting the items in descending order of profit
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if(items[j].profit < items[j+1].profit){
                item temp = items[j];
                items[j] = items[j+1];
                items[j+1] = temp;
            }
        }
    }

    float profit = 0;
    int weight = 0;
    int i = 0;
    while(weight < capacity && i < n){
        if(weight + items[i].weight <= capacity){
            weight += items[i].weight;
            profit += items[i].profit;
        }
        else{
            profit += (capacity - weight) * ((float)items[i].profit / items[i].weight);
            weight = capacity;
        }
        i++;
    }
    printf("Using profits only:\n");
    printf("Maximum profit: %.2f\n", profit);
    printf("Maximum weight: %d\n", weight);

    // Using weights only
    // Sorting the items in ascending order of weight
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if(items[j].weight > items[j+1].weight){
                item temp = items[j];
                items[j] = items[j+1];
                items[j+1] = temp;
            }
        }
    }

    profit = 0;
    weight = 0;
    i = 0;
    while(weight < capacity && i < n){
        if(weight + items[i].weight <= capacity){
            weight += items[i].weight;
            profit += items[i].profit;
        }
        else{
            profit += (capacity - weight) * ((float)items[i].profit / items[i].weight);
            weight = capacity;
        }
        i++;
    }
    printf("Using weights only:\n");
    printf("Maximum profit: %.2f\n", profit);
    printf("Maximum weight: %d\n", weight);

    // Using profit/weight ratio
    // Sorting the items in descending order of profit/weight ratio
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if(items[j].ratio < items[j+1].ratio){
                item temp = items[j];
                items[j] = items[j+1];
                items[j+1] = temp;
            }
        }
    }

    profit = 0;
    weight = 0;
    i = 0;
    while(weight < capacity && i < n){
        if(weight + items[i].weight <= capacity){
            weight += items[i].weight;
            profit += items[i].profit;
        }
        else{
            profit += (capacity - weight) * ((float)items[i].profit / items[i].weight);
            weight = capacity;
        }
        i++;
    }

    printf("Using profit/weight ratio:\n");
    printf("Maximum profit: %.2f\n", profit);
    printf("Maximum weight: %d\n", weight);

    return 0;
}
//5631723
//new_no 56373
#include<stdio.h>


int main(){
    int num, new_num = 0, old_arr[10], new_arr[10], i, j, new_arr_ind = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 0; num != 0; i++){
        old_arr[i] = num%10;
        num /= 10;
    }

    for (j = 0; j < i; j++){
        if (j == 0 || j == i-1){
            new_arr[new_arr_ind] = old_arr[j];
            new_arr_ind ++;
            continue;
        }
        int pre = old_arr[j-1];
        int next = old_arr[j+1];

        if (pre + next != old_arr[j] && pre - next != old_arr[j] && 
        next - pre != old_arr[j] && pre * next != old_arr[j] && pre / next != old_arr[j] &&
        next / pre != old_arr[j] && next % pre != old_arr[j] && 
        pre % next != old_arr[j])
        {
            new_arr[new_arr_ind] = old_arr[j];
            new_arr_ind ++;
        }
    }

    for (i = new_arr_ind-1; i >= 0; i--)
        new_num = (new_num*10) + new_arr[i]; 

    printf("New number is: %d", new_num); 

    return 0;

}
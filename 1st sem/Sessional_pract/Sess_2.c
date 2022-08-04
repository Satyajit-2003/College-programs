// Create matrix with given number alternating the digits 

#include<stdio.h>
#include<math.h>

int main(){
    int row, col, n, len_n, arr[20], rem, i,j, var = 0;
    printf("Enter a numner: ");
    scanf("%d", &n);
    printf("Enter num of rows: ");
    scanf("%d", &row);
    printf("Enter num of columns: ");
    scanf("%d", &col);

    int matrix[row][col];

    len_n = (int)(log10(n)+1);

    for (i = len_n-1; i >= 0; i--){
        rem = n%10;
        arr[i] = rem;
        arr[(2* len_n) - (i+1)] = rem;
        n /= 10;
    }

    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            matrix[i][j] = arr[var];
            if (var == (len_n*2)-1)
                var = 0;
            else    
                var ++;
        }
    }
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
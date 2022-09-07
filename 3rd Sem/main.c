#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    //Write your code here.
    int temp;
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;
    for (int i = 0; i < n-3; i++){
        temp = c;
        c = a + b + c;
        a = b;
        b = temp;;
    }
    return c;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
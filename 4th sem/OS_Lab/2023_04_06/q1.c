//     a
//    /  \
//   b    c

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
    int A, B, C;
    printf("Parent of A id: %d", getpid());
    
    if (B!=0 && C!=0){
        B = fork();
        printf("Parent of B (A): %d", getppid());
        printf("Child of A (B): %d", getpid());
    }

    if (C != 0){
        C = fork();
        printf("Parent of C (A): %d", getppid());
        printf("Child of A (C): %d", getpid());
    }

    return 0;
}
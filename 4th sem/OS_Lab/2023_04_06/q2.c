//A
//  \
//   B
//     \
//       C

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
	int A, B, C
	
	printf("ID of A: %d\n", getpid());
	
	B = fork();
	if (B == 0){
		printf("Parent of B (A) is: %d\n", getppid()):
        printf("Child of A (B) is: %d\n", getpid());
        C = fork();
        if (C == 0){
            printf("Parent of C (B) is: %d\n", getppid()):
            printf("Child of B (C) is: %d\n", getpid());
        }
	}

}
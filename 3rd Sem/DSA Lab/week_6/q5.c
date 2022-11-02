#include<stdio.h>

/*WAP to determine whether the input sequence of brackets is balanced or not.
If a string is balanced, it print YES on a new line; otherwise, print
NO on a new line.*/

char string[20];
char stack[20];
int top = -1;

void push(char ch){
    top ++;
    stack[top] = ch;
}

char pop(){
    return stack[top--];
}

int main(){
    printf("Enter the brackets: ");
    scanf("%s", &string);
    char temp, *cur = string;

    while (*cur != '\0'){
        if (*cur == '(' || *cur == '[' || *cur == '{'){
            push(*cur);
        }else if(*cur == ' '){
            /*Do nothing*/
        }
        else{
            temp = pop();
            if (*cur == ')' && temp != '('){
                printf("NO");
                return 0;
            }else if (*cur == ']' && temp != '['){
                printf("NO");
                return 0;
            }else if (*cur == '}' && temp != '{'){
                printf("NO");
                return 0;
            }
        }
        cur++;
    }
    printf("YES");

    return 0;    
}
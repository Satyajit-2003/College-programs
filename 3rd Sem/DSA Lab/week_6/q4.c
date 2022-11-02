#include<stdio.h>
#include<ctype.h>

/*WAP to convert an infix expression into its equivalent prefix
notation.*/

int top=-1;
char stack[20];

void push(char ch){
    top++;
    stack[top] = ch;
}
char pop(){
    char ch;
    ch = stack[top];
    top--;
    return ch;
}

void reverse(char *str){
    int i=0,j=0;
    char temp;
    while(str[i]!='\0'){
        if (str[i] == '(')
            str[i] = ')';
        else if (str[i] == ')')
            str[i] = '(';
        i++;
    }
    i--;
    while(i>j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }
}

int priority(char ch){
    if (ch == '('){
        return 0;
    }
    else if (ch == '+' || ch == '-'){
        return 1;
    }
    else if (ch == '*' || ch == '/'){
        return 2;
    }
    else if (ch == '^'){
        return 3;
    }
        return -1;
}

int main(){
    char exp[100];
    char postfix[100];
    char *e, x;
    int temp = -1;
    printf("Enter the expression : ");
    scanf("%s",exp);
    reverse(exp);
    e = exp;
    
    while(*e != '\0'){
        if(isalnum(*e)){
            temp++;
            postfix[temp] = *e;
        }
        else if(*e == '(')
            push(*e);
        else if(*e == ')'){
            while((x = pop()) != '('){
                temp++;
                postfix[temp] = x;
            }
        }else{
            while(priority(stack[top]) >= priority(*e)){
                x = pop();
                temp++;
                postfix[temp] = x;
            }
            push(*e);
        }
        e++;
    }
    
    while(top != -1){
        x = pop();
        temp++;
        postfix[temp] = x;
    }
    // temp++;
    // postfix[temp] = '\0';

    reverse(postfix);
    printf("Postfix is: %s", postfix);
    
    return 0;
}
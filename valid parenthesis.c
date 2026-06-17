//valid parenthesis
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "()[]{}";
    char stack[100];
    int top = -1;
    int valid = 1;

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] == '(' || str[i] == '[' || str[i] == '{') {
            stack[++top] = str[i];
        }
        else {
            if(top == -1) {
                valid = 0;
                break;
            }

            char ch = stack[top--];

            if((str[i] == ')' && ch != '(') ||
               (str[i] == ']' && ch != '[') ||
               (str[i] == '}' && ch != '{')) {
                valid = 0;
                break;
            }
        }
    }

    if(top != -1)
        valid = 0;

    if(valid)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}

//remove adjacent duplicates
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abbaca";
    char stack[100];
    int top = -1;

    for(int i = 0; str[i] != '\0'; i++) {

        if(top >= 0 && stack[top] == str[i])
            top--;
        else
            stack[++top] = str[i];
    }

    stack[top + 1] = '\0';

    printf("Result = %s", stack);

    return 0;
}
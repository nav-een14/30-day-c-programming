//reverse linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    struct Node *head = NULL, *temp, *prev = NULL, *curr;

    for(int i=4;i>=1;i--) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = i;
        temp->next = head;
        head = temp;
    }

    curr = head;

    while(curr != NULL) {
        struct Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

    return 0;
}
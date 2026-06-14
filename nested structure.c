//nested  structure
#include <stdio.h>

struct Address {
    char city[30];
    int pin;
};

struct Student {
    char name[30];
    struct Address addr;
};

int main() {
    struct Student s = {"Naveena", {"Chennai", 600001}};

    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.addr.city);
    printf("PIN: %d\n", s.addr.pin);

    return 0;
}
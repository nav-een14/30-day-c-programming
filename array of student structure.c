// array of student structure
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
};

int main() {
    struct Student s[3] = {
        {101, "Naveena"},
        {102, "Priya"},
        {103, "Arun"}
    };

    for(int i = 0; i < 3; i++) {
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Name: %s\n\n", s[i].name);
    }

    return 0;
}
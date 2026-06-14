//pointer to structure
#include <stdio.h>

struct Student {
    int rollNo;
    float marks;
};

int main() {
    struct Student s = {101, 89.5};
    struct Student *ptr = &s;

    printf("Roll No: %d\n", ptr->rollNo);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
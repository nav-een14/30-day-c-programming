//student structure

#include <stdio.h>
struct student{
    int rollno;
    char name[50];
    int mark;
    
};

int main()
{
    struct student s={1,"naveena",99};
    printf(" roll no: %d\n",s.rollno);
    printf("name of student:%s\n",s.name);
    printf("mark :%d\n",s.mark);

    return 0;
}
#include <stdio.h>

struct students
{
    int age, id, marks;
};
int main()
{
    struct students Aman;
    Aman.age = 20;
    Aman.id = 102;
    Aman.marks = 89;
    printf("Aman age :- %d\n", Aman.age);
    printf("Aman id :- %d\n", Aman.id);
    printf("Aman marks :- %d\n", Aman.marks);

    struct students Rahul;
    Rahul.age = 22;
    Rahul.id = 103;
    Rahul.marks = 76;
    printf("Rahul %d\n", Rahul.age);
    printf("Rahul %d\n", Rahul.id);
    printf("Rahul %d\n", Rahul.marks);

    struct students Mukesh;
    Mukesh.age = 25;
    Mukesh.id = 106;
    Mukesh.marks = 45;
    printf("Mukesh %d\n", Mukesh.age);
    printf("Mukesh %d\n", Mukesh.id);
    printf("Mukesh %d\n", Mukesh.marks);

    return 0;
}
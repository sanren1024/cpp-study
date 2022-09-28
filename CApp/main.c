#include <stdio.h>
#include <string.h>

struct student
{
    char name[10];
    int age;
};

void print_student(const struct student *st)
{
    printf("name = %s, age = %d\n", st->name, st->age);
}

void set_student(struct student *st, const char *name, int age)
{
    strcpy(st->name, name);
    st->age = age;
}

int main01(int argc, char *argv[])
{
    struct student st = { "Nicholas", 34 };

    set_student(&st, "Mike", 50);
    print_student(&st);

    return 0;
}

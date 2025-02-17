#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float gpa;
    struct {
        int day;
        char month[10];
        int year;
    } birthday;
};

int main() {
    struct Student s1;
    strcpy(s1.name, "Alice CodeSmith");
    s1.id = 1001;
    s1.gpa = 3.8;
    s1.birthday.day = 15;
    strcpy(s1.birthday.month, "September");
    s1.birthday.year = 2000;

    printf("Student Record:\n");
    printf("Name: %s\nID: %d\nGPA: %.2f\n", s1.name, s1.id, s1.gpa);
    printf("Birthday: %d %s %d\n", s1.birthday.day, s1.birthday.month, s1.birthday.year);
    return 0;
}
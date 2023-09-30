#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    int age;
};

int main(){

    struct Student student1;
    strcpy(student1.name,"some name");
    student1.age = 10;

    printf("students name is %s, and the age is %d\n",student1.name,student1.age);

    return 0;
}
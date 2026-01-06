#include <stdio.h>

typedef struct {
    char name[20];
    int age;
    float score;
}student;
int main(){
    student stu1={"Alice", 18, 90.5};
    student *p=&stu1;
    printf("Age: %d\n", p->age);
    printf("Score: %.1f\n", p->score);
    printf("Name: %s\n", p->name);
    return 0;
}
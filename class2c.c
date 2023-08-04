// STRUCT

#include <stdio.h>

struct student {
    int roll_no;
    int age;
    char name[20];
};

int main() {

   struct student s1;
   printf("Enter data for student s1:");

   scanf("%d %d %s", &s1.roll_no, &s1.age, s1.name);

   printf("Data of student s1: %d, %d, %s", s1.roll_no, s1.age, s1.name); 

   struct student s2;
   printf("Enter data for student s2:");

   scanf("%d %d %s", &s2.roll_no, &s2.age, s2.name);

   printf("Data of student s2: %d, %d, %s", s2.roll_no, s2.age, s2.name); 

   // struct array

   struct student s[5];
    int i;
    printf("Enter the data of the students: \n");
    for (i =0; i < 5; i ++) {
        scanf("%d %d %s", &s[i].roll_no, &s[i].age, s[i].name);
    }

    for (i =0; i < 5; i ++) {
        printf("Student %d: %d %d %s\n",i+1, s[i].roll_no, s[i].age, s[i].name);
    }

   return 0;
}


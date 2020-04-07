#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
typedef struct Student {
  char name[50];
  int age;
  char sex[10]; // True: male, False: femal
} Student;

void print_stu(Student *stu);

int main() {
  Student stu1;
  //  stu1.name = "lxy";
  // stu1.sex = "male";
  strcpy(stu1.name, "lxy"); //因为name的长度是被确定的，而直接赋值是不行的，得利用strcpy函数
  strcpy(stu1.sex, "male");
  stu1.age = 23;

  print_stu(&stu1);
}

void print_stu(Student *stu) {
  printf("name:\t%s, age:\t%d, sex:\t%s\n", stu->name, stu->age, stu->sex);
}

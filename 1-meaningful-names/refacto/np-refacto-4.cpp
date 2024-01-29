#include <iostream>
#include <string>

struct Student {
    int id;
    std::string name;
    double grade;
};

int main() {
    Student student;
    student.id = 123;
    student.name = "John Doe";
    student.grade = 85.5;

    std::cout << "ID: " << student.id << ", Name: " << student.name << ", Grade: " << student.grade << std::endl;

    return 0;
}

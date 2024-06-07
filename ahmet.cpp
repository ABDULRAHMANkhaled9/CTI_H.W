#include <iostream>
#include <string>
#include <vector>
class Exam {
public:
    std::string examName;
    double grade;

    Exam(const std::string& name, double grade) : examName(name), grade(grade) {}

    void displayExamInfo() const {
        std::cout << "Exam: " << examName << ", Grade: " << grade << std::endl;
    }
};

class Student {
public:
    std::string name;
    int studentID;
    std::vector<Exam> exams;

    Student(const std::string& name, int id) : name(name), studentID(id) {}

    void addExam(const Exam& exam) {
        exams.push_back(exam);
    }

    void displayStudentInfo() const {
        std::cout << "Student: " << name << ", ID: " << studentID << std::endl;
        for (const auto& exam : exams) {
            exam.displayExamInfo();
        }
    }
};

int main() {
    Student student1("Ahmed", 210202885);
    Student student2("Mostafa", 210202886);

    student1.addExam(Exam("Math", 95.0));
    student1.addExam(Exam("History", 88.0));

    student2.addExam(Exam("Math", 76.0));
    student2.addExam(Exam("History", 92.0));

    student1.displayStudentInfo();
    std::cout << std::endl;
    student2.displayStudentInfo();

    return 0;
}
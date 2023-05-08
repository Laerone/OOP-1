#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

class Student {
public:
    std::string surname;
    std::string name;
    int mathGrade;
    int physicsGrade;
    int informaticsGrade;

    double getAverageGrade() const {
        return (mathGrade + physicsGrade + informaticsGrade) / 3.0;
    }
};

bool compareStudents(const Student& s1, const Student& s2) {
    return s1.getAverageGrade() > s2.getAverageGrade();
}

int main() {
    std::ifstream inputFile("data.txt");
    if (!inputFile) {
        std::cout << "Failed to open the file." << std::endl;
        return 1;
    }

    std::vector<Student> students;
    std::string line;

    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        Student student;
        iss >> student.surname >> student.name >> student.mathGrade >> student.physicsGrade >> student.informaticsGrade;
        students.push_back(student);
    }

    inputFile.close();

    std::sort(students.begin(), students.end(), compareStudents);

    std::cout << "Students with an average grade higher than 4.0:" << std::endl;

    for (const auto& student : students) {
        if (student.getAverageGrade() > 4.0) {
            std::cout << student.surname << " " << student.name << std::endl;
        }
    }

    std::ofstream reportFile("report.txt");
    if (!reportFile) {
        std::cout << "Failed to create the report file." << std::endl;
        return 1;
    }

    reportFile << "Report" << std::endl;
    reportFile << "Number of students: " << students.size() << std::endl;

    reportFile.close();

    return 0;
}


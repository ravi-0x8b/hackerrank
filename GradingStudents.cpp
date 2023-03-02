#include <iostream>
#include <vector>

std::vector<int> gradingStudents(std::vector<int>);

int main(int argc, char** argv) {
    std::vector<int> grades = gradingStudents({
        88, 55, 20, 35, 63, 88, 90, 95, 10, 26
    });
    for (int grade : grades) 
        std::cout << grade << " ";
    return 0;
}

std::vector<int> gradingStudents(std::vector<int> grades) {
    std::vector<int> final_grades;
    for (int grade : grades) {
        int nex5multiple = ((grade / 5) + 1) * 5;
        if ((nex5multiple - grade) < 3 && grade >= 38)
            final_grades.push_back(nex5multiple);
        else
            final_grades.push_back(grade);
    }
    return final_grades;
}
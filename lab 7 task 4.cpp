#include <iostream>
using namespace std;

int main() {
    int marks1, marks2, marks3;
    
    
    cout << "Enter marks for three subjects: ";
    cin >> marks1 >> marks2 >> marks3;
    
    int totalMarks = marks1 + marks2 + marks3;
    int percentage = (totalMarks / 3);
    
    string grade;
    
    
    if (percentage >= 90)
        grade = "A";
    else if (percentage >= 80)
        grade = "B";
    else if (percentage >= 70)
        grade = "C";
    else if (percentage >= 60)
        grade = "D";
    else
        grade = "F";
    
    cout << "Grade: " << grade << endl;
    
   
    if (grade == "A" && totalMarks >= 270)
        cout << "Student is eligible for merit scholarship" << endl;
    else if (grade == "B" && totalMarks >= 240)
        cout << "Student is eligible for regular scholarship" << endl;
    else
        cout << "No scholarship" << endl;
    
    return 0;
}
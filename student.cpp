#include "student.h"

Student students[100];  
int count = 0;          

void addStudent() {
    cout << "\n-- Add Student --\n";
    cout << "ID: ";    
     cin >> students[count].id;
    cout << "Name: ";  
     cin >> students[count].name;
    cout << "Age: "; 
       cin >> students[count].age;
    cout << "Course: ";
     cin >> students[count].course;
    count++;
    cout << " Student Added!\n";
}

void displayStudents() {
    cout << "\n-- All Students --\n";
    if (count == 0) {
        cout << "No students yet.\n";
        return;
    }
    for (int i = 0; i < count; i++) {
        cout << "ID: "     << students[i].id
             << " Name: "  << students[i].name
             << " Age: "   << students[i].age
             << " Course: "<< students[i].course << "\n";
    }
}

void searchStudent() {
    int id;
    cout << "\n-- Search Student --\n";
    cout << "Enter ID: "; cin >> id;
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            cout << "Found -> Name: " << students[i].name
                 << " Course: "       << students[i].course << "\n";
            return;
        }
    }
    cout << " Student not found.\n";
}

void updateStudent() {
    int id;
    cout << "\n-- Update Student --\n";
    cout << "Enter ID: "; cin >> id;
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            cout << "New Name: ";   
            cin >> students[i].name;
            cout << "New Age: ";
                cin >> students[i].age;
            cout << "New Course: "; 
            cin >> students[i].course;
            cout << " Updated!\n";
            return;
        }
    }
    cout << " Student not found.\n";
}

void deleteStudent() {
    int id;
    cout << "\n-- Delete Student --\n";
    cout << "Enter ID: "; 
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            students[i] = students[count - 1]; // fill gap with last student
            count--;
            cout << "Deleted!\n";
            return;
        }
    }
    cout << " Student not found.\n";
}
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};
studentType students[20];

int max_score = 0;
vector<string> highest_name;

void input() {

    for (int i = 0; i < 20; i++) {
        cout << "Masukkan nama pertama siswa ke-" << i + 1 << endl;
        cin >> students[i].studentFName;
        cout << "Masukkan nama akhir siswa ke-" << i + 1 << endl;
        cin >> students[i].studentLName;
        cout << "Masukkan skor siswa ke-" << i + 1 << endl;
        cin >> students[i].testScore;
    }
}

void grade_assign() {
    for (int i = 0; i < 20; i++) {
        if (students[i].testScore < 20) {
            students[i].grade = 'E';
        }
        
        else if (students[i].testScore >= 20 && students[i].testScore < 40) {
            students[i].grade = 'D';
        }

        else if (students[i].testScore >= 40 && students[i].testScore < 60) {
            students[i].grade = 'C';
        }

        else if (students[i].testScore >= 60 && students[i].testScore < 80) {
            students[i].grade = 'B';
        }

        else {
            students[i].grade = 'A';
        }
    }
}

void highest() {
    
    for (int i = 0; i < 20; i++) {
        max_score = max(max_score, students[i].testScore);
    }

    for (int i = 0; i < 20; i++) {
        if (max_score == students[i].testScore) {
            highest_name.push_back(students[i].studentFName + " " + students[i].studentLName);
        }
    }
}

void output() {
    cout << "\n===== Data Siswa =====\n";

    cout << left
         << setw(20) << "Name"
         << setw(10) << "Score"
         << setw(10) << "Grade"
         << endl;

    cout << string(60, '-') << endl; 
    for (int i = 0; i < 20; i++) {
        cout << left
             << setw(20) << (students[i].studentLName + ", " + students[i].studentFName)
             << setw(10) << students[i].testScore
             << setw(10) << students[i].grade
             << endl;
    }

    cout << "\nSiswa dengan skor tertinggi (" << max_score << "):\n";
    for (auto &name : highest_name) {
        cout << " - " << name << endl;
    }
}



int main() {
    input();
    grade_assign();
    highest();
    output();
}
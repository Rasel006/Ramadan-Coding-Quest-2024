#include <bits/stdc++.h>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> rounded_grades;
    for (int grade : grades) {
        if (grade < 38) {
            rounded_grades.push_back(grade);
        } else {
            int next_multiple_of_5 = ((grade / 5) + 1) * 5;
            if (next_multiple_of_5 - grade < 3) {
                rounded_grades.push_back(next_multiple_of_5);
            } else {
                rounded_grades.push_back(grade);
            }
        }
    }
    return rounded_grades;
}
int main() {
    int n;
    cin >> n;

    vector<int> grades(n);
    for (int i = 0; i < n; ++i) {
        cin >> grades[i];
    }

    vector<int> rounded_grades = gradingStudents(grades);

    for (int grade : rounded_grades) {
        cout << grade << endl;
    }

    return 0;
}

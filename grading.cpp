#include <iostream>

using namespace std;

int main(){
    int physicsMarks, chemistryMarks, biologyMarks, mathematicsMarks, computerMarks, totalMarks, averageMark;

    cout << "Enter marks for Physics: " << endl;
    cin >> physicsMarks;
    cout << "Enter marks for Chemistry: " << endl;
    cin >> chemistryMarks;
    cout << "Enter marks for Biology: " << endl;
    cin >> biologyMarks;
    cout << "Enter marks for Mathematics: " << endl;
    cin >> mathematicsMarks;
    cout << "Enter marks for Computer: " << endl;
    cin >> computerMarks;
    totalMarks = physicsMarks + chemistryMarks + biologyMarks + mathematicsMarks + computerMarks;
    averageMark = totalMarks / 5;
    if (averageMark >= 90 && averageMark <= 100)
        cout << averageMark << "%: Grade A" << endl;
    else if(averageMark >= 80 && averageMark <= 89)
        cout << averageMark << "%: Grade B" << endl;
    else if (averageMark >= 70 && averageMark <= 79)
        cout << averageMark << "%: Grade C" << endl;
    else if (averageMark >= 60 && averageMark <= 69)
        cout << averageMark << "%: Grade D" << endl;
    else if (averageMark >= 40 && averageMark <= 59)
        cout << averageMark << "%: Grade E" << endl;
    else if (averageMark < 40)
        cout << averageMark <<"%: Grade F" << endl;
    else
        cout << "Invalid" << endl;

    return 0;
}


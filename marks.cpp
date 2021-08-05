#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int studentOne, studentTwo, studentThree, studentFour, studentFive;
    ifstream infile;
    ofstream outfile;
    infile.open("testScores.txt");
    infile >> studentOne >> studentTwo >> studentThree >> studentFour >> studentFive;
    int totalMarks = studentOne + studentTwo + studentThree + studentFour + studentFive;
    int averageScores=totalMarks/5;
    cout << "Student One marks: " << studentOne << endl;
    cout << "Student Two marks: " << studentTwo << endl;
    cout << "Student Three marks: " << studentThree << endl;
    cout << "Student Four marks: " << studentFour << endl;
    cout << "Student Five marks: " << studentFive << endl;
    outfile.open("meanScore.txt", ios::app);
    outfile << "The average of the class is " <<averageScores << "." << endl;
    outfile.close();
    return 0;

}

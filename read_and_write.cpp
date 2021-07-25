#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string name;
    string gender;
    int age;
    float feeBalance;
    float averageScore;
    string grade;
    // instance of our fstream class
    ifstream infile;
    ofstream outfile;
    // opening the studentData.txt file
    infile.open("studentData.txt");
    outfile.open("output.txt", ios::app);
    infile >> name >> gender >> age >> feeBalance >> averageScore >> grade;
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Age: " << age << endl;
    cout << "Fee Balance: " << feeBalance << endl;
    cout << "Average Score: " << averageScore << endl;
    cout << "Grade: " << grade << endl;
    outfile << name <<endl;
    outfile << gender << endl;
    outfile << age << endl;
    outfile << feeBalance << endl;
    outfile << averageScore << endl;
    outfile << grade << endl;
    outfile.close();
    return 0;
}


#include <iostream>

using namespace std;

int main(){
    int age;
    float feeBalance;
    double weight;
    char letter;
    bool isMarried;
    string name;
    cout << "Enter Your Age: " << endl;
    cin >> age;
    cout << "Enter your Fee Balance: "<< endl;
    cin >> feeBalance;
    cout << "Enter your weight: " << endl;
    cin >> weight;
    cout << "Enter any letter: " << endl;
    cin >> letter;
    cout << "Are you married: " << endl;
    cin.setf(ios :: boolalpha);
    cout.setf(ios :: boolalpha);
    cin >>isMarried;
    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Your age is: " << age << endl;
    cout << "Your Fee Balance is: " << feeBalance << endl;
    cout << "Your weight is: " << weight << endl;
    cout << "Your letter is:" << letter << endl;
    cout << "You indicated that you are married? " << isMarried << endl;
    cout << "Your name is: " << name << endl;
    return 0;
}

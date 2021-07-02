#include<iostream>
using namespace std;
int main() {
    int x;
    int workers = 7;
    int hours = 2;
    cout << "Enter the number of workers:" << endl;
    cin >> x;
    int hoursTaken = x * hours/workers;
    cout << "The number of hours taken are:" << hoursTaken << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int x = 7, y = 3, num;

    cout << "Before Swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    num = x;
    x = y;
    y = num;

    cout << "\nAfter Swapping." << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;

}

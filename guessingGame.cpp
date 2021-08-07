#include <iostream>
using namespace std;
int main(){
    int guessNumber;
    cout << "Enter a number between 1 and 10" << endl;
    cin >> guessNumber;
    do{
        if(guessNumber == 7){
            cout << "Champion !!!" << endl;
        }
        else{
            cout << "Try again" << endl;
        }
    }

    while(guessNumber <= 5);{
        cout << "Looser !!!" << endl;
    }
    return 0;
}

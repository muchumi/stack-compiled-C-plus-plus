// Program to print sum of numbers if a positive number is entered by the user
// If user enters negative number, it is skipped

# include<iostream>
using namespace std;

int main(){
    int number; //to be provided by the user
    int a=20; //first number
    int b=30; //second number
    int c; //we will store sum in variable c

    cout << "Enter an integer: ";
    cin >> number;

    // checks if the number is positive
    if(number > 0){
        cout << "You have entered a positive integer: " << number << endl;
        c = a + b;
        cout << "The sum of a and b is: " << c << endl;
    }
    for (; number <= 10; number ++){
        cout << "I am number: " << number << endl;
    }
    return 0;
}


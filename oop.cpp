# include <iostream>

using namespace std;

// This is an Object Oriented Program that adds two numbers

class Add{
    public:
        int a = 10;
        int b = 45;
        int c;

        void addNumbers(){
            c = a + b;
             cout << "Sum of a and b is:" << c << endl;
        }
};
int main(){
    Add x;
    x.addNumbers();
}

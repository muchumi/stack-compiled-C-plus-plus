#include <iostream>

using namespace std;

int main(){
    int i;
    for(i = 1; i <= 100; i++){
        // checking if number is divisible by 2
        if(i%2 == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int grossIncome = 1078500;
    int nhif = 1700;
    int nssf = 720;
    int taxableIncome = grossIncome - (nhif + nssf);
    int paye = 0.25 * grossIncome;
    int netSalary = taxableIncome - paye;

    cout << netSalary << endl;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int principal;
    double interestRate;
    int numberOfYears;

    cout << "How much are you investing: ";
    cin >> principal;
    cout << "What is the annual interest rate (%): ";
    cin >> interestRate;
    cout << "How long (years): ";
    cin >> numberOfYears;

    double finalBalance = pow(1.0 + interestRate * 0.01, numberOfYears) * principal;
    double interest = finalBalance - principal;

    cout << "You will earn: " << interest << endl;

    return 0;
}

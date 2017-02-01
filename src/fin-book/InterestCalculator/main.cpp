#include <iostream>
#include <cmath>
using namespace std;

void read_user_input(int& principal, double& interestRate, int& numberOfYears) {
    cout << "How much are you investing: ";
    cin >> principal;
    cout << "What is the annual interest rate (%): ";
    cin >> interestRate;
    cout << "How long (years): ";
    cin >> numberOfYears;
}

void print_interest(const double& interest) {
    cout << "You will earn: " << interest << endl;
}

int main() {
    int principal;
    double interestRate;
    int numberOfYears;

    read_user_input(principal, interestRate, numberOfYears);

    double finalBalance = pow(1.0 + interestRate * 0.01, numberOfYears) * principal;
    double interest = finalBalance - principal;
    
    print_interest(interest);
    
    return 0;
}

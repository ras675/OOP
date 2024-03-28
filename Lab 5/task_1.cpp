#include <iostream>
using namespace std;

class SavingsAccount {
private:
    static double annualInterestRate;
    double savingsBalance;

public:
    SavingsAccount(double balance) : savingsBalance(balance) {}

    void calculateMonthlyInterest() {
        double monthlyInterest = savingsBalance * annualInterestRate / 12.0;
        savingsBalance += monthlyInterest;
    }

    static void modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
    }

    double getBalance() const {
        return savingsBalance;
    }
};

double SavingsAccount::annualInterestRate = 0.03; // Initial annual interest rate

int main() {
    SavingsAccount saver1(2000.0);
    SavingsAccount saver2(3000.0);

    cout << "Initial Balances:\n";
    cout << "Saver 1: $" << saver1.getBalance() <<endl;
    cout << "Saver 2: $" << saver2.getBalance() <<endl;

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "\nBalances after one month of 3% interest:\n";
    cout << "Saver 1: $" << saver1.getBalance() <<endl;
    cout << "Saver 2: $" << saver2.getBalance() <<endl;

    SavingsAccount::modifyInterestRate(0.04); // Change the annual interest rate to 4%

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "\nBalances after one month of 4% interest:\n";
    cout << "Saver 1: $" << saver1.getBalance() <<endl;
    cout << "Saver 2: $" << saver2.getBalance() <<endl;

    return 0;
}


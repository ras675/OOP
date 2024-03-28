#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    string accountType;
    double currentBalance;
    double minimumBalance;
    double interestRate;
    double sourceTax;
    double penaltyFee;
    
public:
    // Default constructor
    BankAccount() {
        accountNumber = 0;
        currentBalance = 0.0;
        minimumBalance = 0.0;
        interestRate = 0.03; // 3%
        sourceTax = 0.1; // 10%
        penaltyFee = 50.0; // Penalty fee for falling below minimum balance
    }
    
    // Parameterized constructor
    BankAccount(int number, string name, string type, double balance, double minBalance)
        : accountNumber(number), accountHolderName(name), accountType(type),
          currentBalance(balance), minimumBalance(minBalance) {
    }

    // Function to display current balance
    void showBalance() {
        cout << "Current Balance: BDT " << currentBalance << endl;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            currentBalance += amount;
            cout << "Deposit of BDT " << amount << " successful." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdrawal(double amount) {
        if (amount > 0 && currentBalance - amount >= minimumBalance) {
            currentBalance -= amount;
            cout << "Withdrawal of BDT " << amount << " successful." << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Function to calculate and deposit interest
    void giveInterest() {
        double interest = currentBalance * interestRate;
        double netInterest = interest - (interest * sourceTax);
        deposit(netInterest);
        cout << "Interest of BDT " << netInterest << " added to the account." << endl;
    }

    // Function to display account statement
    void printAccountStatement() {
        cout << "Account Statement for Account No. " << accountNumber << " - " << accountHolderName << endl;
        cout << "Current Balance: BDT " << currentBalance << endl;
    }

    // Function to apply penalty if balance falls below minimum
    void applyPenalty() {
        if (currentBalance < minimumBalance) {
            currentBalance -= penaltyFee;
            cout << "Penalty fee of BDT " << penaltyFee << " applied for falling below minimum balance." << endl;
        }
    }

};

int main() {
    // Example usage
    BankAccount myAccount(1234, "John Doe", "Savings", 10000, 500);

    myAccount.showBalance();
    myAccount.deposit(2000);
    myAccount.showBalance();
    myAccount.withdrawal(1500);
    myAccount.showBalance();
    myAccount.giveInterest();
    myAccount.showBalance();
    myAccount.applyPenalty();
    myAccount.showBalance();

    return 0;
}

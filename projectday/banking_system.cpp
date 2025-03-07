#include <iostream>
using namespace std;
class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNum, string accHolder, double bal)
    {
        this->accountNumber = accNum;
        this->accountHolderName = accHolder;
        this->balance = bal;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << " New Balance: " << balance << endl;
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << " New Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient funds!" << endl;
        }
    }
    double getBalance()
    {
        return balance;
    }
    void displayAccountInfo()
    {
        cout << "Account Number: " << accountNumber << "\nHolder: " << accountHolderName << "\nBalance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    SavingsAccount(int accNum, string accHolder, double bal, double rate)
    {
        BankAccount obj(accNum, accHolder, bal);
        this->interestRate = rate;
    }
    void calculateInterest()
    {
        balance += balance * (interestRate / 100);
        cout << "Interest Added: " << balance * (interestRate / 100) << " New Balance: " << balance << endl;
    }
};
class CheckingAccount : public BankAccount
{
    double overdraftLimit;

public:
    CheckingAccount(int accNum, string accHolder, double bal, double limit)
    {
        this->overdraftLimit = limit;
        BankAccount obj2(accNum, accHolder, bal);
    }
    void withdraw(double amount)
    {
        if (amount <= balance + overdraftLimit)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << " New Balance: " << balance << endl;
        }
        else
        {
            cout << "Overdraft limit exceeded!" << endl;
        }
    }
};
class FixedDepositAccount : public BankAccount
{
    int term;

public:
    FixedDepositAccount(int accNum, string accHolder, double bal, int t)
    {
        this->term = t;
        BankAccount obj3(accNum, accHolder, bal);
    }
    void calculateInterest()
    {
        balance += balance * 0.05 * term;
        cout << "Fixed Deposit Interest Added: " << balance * 0.05 * term << " New Balance: " << balance << endl;
    }
};

int main()
{
    SavingsAccount acc1(1001, "prince", 5000, 3.5);
    CheckingAccount acc2(1002, "vinit", 2000, 500);
    FixedDepositAccount acc3(1003, "kartavya", 10000, 2);

    int choice;
    do
    {
        cout << "\nBanking System Menu:\n1. Deposit\n2. Withdraw\n3. Display Account Info\n4. Calculate Interest\n5. Exit\nEnter choice: ";
        cin >> choice;
        int accIdx;
        cout << "Enter account type (0 for Savings, 1 for Checking, 2 for Fixed Deposit): ";
        cin >> accIdx;

        switch (accIdx)
        {
        case 0:
            switch (choice)
            {
            case 1:
            {
                double amount;
                cout << "Enter amount: ";
                cin >> amount;
                acc1.deposit(amount);
                break;
            }
            case 2:
            {
                double amount;
                cout << "Enter amount: ";
                cin >> amount;
                acc1.withdraw(amount);
                break;
            }
            case 3:
                acc1.displayAccountInfo();
                break;
            case 4:
                acc1.calculateInterest();
                break;
            }
            break;
        case 1:
            switch (choice)
            {
            case 1:
            {
                double amount;
                cout << "Enter amount: ";
                cin >> amount;
                acc2.deposit(amount);
                break;
            }
            case 2:
            {
                double amount;
                cout << "Enter amount: ";
                cin >> amount;
                acc2.withdraw(amount);
                break;
            }
            case 3:
                acc2.displayAccountInfo();
                break;
            }
            break;
        case 2:
            switch (choice)
            {
            case 1:
            {
                double amount;
                cout << "Enter amount: ";
                cin >> amount;
                acc3.deposit(amount);
                break;
            }
            case 2:
            {
                double amount;
                cout << "Enter amount: ";
                cin >> amount;
                acc3.withdraw(amount);
                break;
            }
            case 3:
                acc3.displayAccountInfo();
                break;
            case 4:
                acc3.calculateInterest();
                break;
            }
            break;
        default:
            cout << "Invalid account selection!" << endl;
        }

    } while (choice != 5);
}

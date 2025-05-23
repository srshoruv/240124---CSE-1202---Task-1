#include <iostream>
using namespace std;

class BankAccount
{
    string accountHolderName;
    double balance;

    public:
    BankAccount(string accountHolderName, double balance = 0)
    {
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }

    void deposit (double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Balance.\n";
        }
        else
        {
            balance -= amount;
        }
    }

    void displayBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }

    ~BankAccount()
    {
        cout << "BankAccount for " << accountHolderName << " closed.\n";
    }
};


int main()
{
    
    BankAccount b("shoruv");
    b.deposit(500);
    b.withdraw(100);
    b.withdraw(600);
    b.displayBalance();
    
    return 0;
}
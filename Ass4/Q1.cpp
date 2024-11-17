#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    int balance;

public:

    BankAccount(int accNo, string holder, double bal)
    {
        accountNumber= accNo;
        accountHolder= holder;
        balance= bal;
    }

    void deposit(double amount)
    {
        if (amount>0)
        {
            balance += amount;
            cout<<" Deposit successful! New balance is : "<< balance <<endl;
        }
        else
        {
            cout << "Deposite amount must be positive!"<<endl;
        }  
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout<< "Insufficient balance! Available balance is : "<< balance <<endl;
        }
        else if (amount > 0)
        {
            balance -= amount;
            cout<< "Withdeawal successful! New balance is : "<< balance <<endl;
        }
        else{
            cout<<"Withdrawl amount must be positive!"<<endl;
        }
    }

    void display()
    {
        cout<< "Account Number: "<<accountNumber<< endl;
        cout<< "Account Holder: "<<accountHolder<<endl;
        cout<< "Balance: "<<balance<< endl; 
    }
};

int main()
{
    BankAccount account(987654, "Piyush Gupta", 10000.0);

    account.display();

    account.deposit(500.0);

    account.withdraw(300.0);

    account.withdraw(22393.0);

    return 0;

}
#include <iostream>
using namespace std;
class atmMachine
{

private:
    int balance = 100;

public:
    void debit(int amount , int pin)
    {
        if(pin == 1234){
            if (amount <= balance)
        {
            balance -= amount;
            cout << "Now your current balance is :- " << balance << " Thank you visit again!!" << endl;
        }
        else
        {
            cout << "You dont have sufficenft balance is your account" << endl;
        }
        }
        else {
            cout<<"Incoreect pin"<<endl;
        }
    }

    void credit(int dbAmount)
    {
        if (dbAmount > 0)
        {
            balance += dbAmount;
            cout << "your amount is successfully debited in your account " << endl;
        }
        else
        {
            cout << "Enter valid amount only " << endl;
        }
    }

    void checkBalance()
    {
        cout << "Your current balance is :- " << balance << " rs" << endl;
    }
};

int main()
{

    atmMachine p1;

    //  p1.checkBalance();
    // p1.debit(100);
    p1.checkBalance();
    p1.credit(1000);
    p1.checkBalance();
    p1.debit(400 , 1234);


    return 0;
}

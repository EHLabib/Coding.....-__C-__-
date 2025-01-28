#include<iostream>
using namespace std;
class customer 
{
    string name;
    int balance,acc_number;
    public : 
    customer(string name, int balance, int acc_number)
    {
        this->name = name;
        this->balance = balance;
        this->acc_number = acc_number;
    };

    void deposit(int amount)
    {
        if(amount <= 0 )   throw "Insafatian balance ";
        balance += amount; 
        cout<<amount<<" is deposit successfully"<<endl;
    }

    void withdraw(int amount)
    {
        if(amount > 0  && amount <= balance)       
        {
            balance -= amount;
            cout<<amount<<" is withdraw successfully"<<endl;
        }
        else
        throw "Your balance is low";
    }

};

int main()
{
    customer a1("Labib",5000,2);
    try
    {
        a1.deposit(330);
        a1.withdraw(600);
    }
    catch(const char *e)
    {
        cout<<"Exception occoured : "<<e<<endl;
    }
    
}
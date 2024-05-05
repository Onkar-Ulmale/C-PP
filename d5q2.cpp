// Q2:Create cpp application for bank account handling.
// 2.1. Create a class BankAccount -- acct no(int),customer name(stri ng),balance(double)
// Add  constr. (2 constrs : first to accept all details )
// 2.2 Add Business logic methods
// Methods
// public void withdraw(double amt) 
// public void deposit(double amt)
// 2.3: Create object of account class and test withdraw and deposit methods.
#include<iostream>
#include<string>
using namespace std;
class bankaccount
{
    private:
    int accno;
    string name;
    double balance;

    public:
    bankaccount()
    {

        cout<<"Accepting all parameters "<<endl<<"Enter The Account no"<<endl;
        int a;
        cin>>a;
        this->accno=a;
        cout<<"Enter Name "<<endl;
        string n;
        cin>>n;
        this->name=n;
        cout<<"Enter Balance "<<endl;
        double b;
        cin>>b;
        this->balance=b;
        cout<<"All values assigned "<<endl;
    }
    bankaccount(int a,string b,double c)
    {
        this->accno=a;
        this->name=b;
        this->balance=c;
    }
    void withdraw(double amt)
    {
        if(amt<this->balance)
            this->balance=this->balance-amt;
        else
            cout<<"You dont have enough balance :";
        cout<<"The Ammount has been withdrawn:"<<amt<<endl;
    }

    void deposite(double amt)
    {
        this->balance=this->balance+amt;
        cout<<"The ammount has been deposited :"<<amt<<endl;
    }
    void display()
    {
        cout<<"The account no is "<<this->accno<<endl;
        cout<<"The Name: "<<this->name<<endl;
        cout<<"The account balance is "<<this->balance<<endl;


    }
};
int main()
{
    bankaccount b1;
    bankaccount b2(333,"jojo",90000);
    b1.display();
    b2.display();
    b2.withdraw(15000);
    b1.deposite(15000);
    b1.display();
    b2.display();
    

}

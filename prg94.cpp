/*Write a C++ implementation for class BankAccount that contains the
following members:
Data members: 1. customerName of type string, 2. cutomerID of type
integer, 3. accountNumber of type integer, 4. accountBalance of type
double. 5. Email address
Member functions:
1. Empty constructor (default constructor) to initialize all data
members to their appropriate default values.
2. Parameterized constructor to initialize all data members to the
given values. 3. Copy constructor to initialize all data members by
the values of an existing object.
4. getBalance Function to return the accountBalance.
5. withdraw Function which receives the amount of money to be
withdrawn and checks it against the account balance to decide whether
to perform the transaction or not.
Create 2 no of customer accounts, and display the customer having
maximum balance using a non member function.*/

#include<iostream>
using namespace std;

class BankAccount
{
    string customerName;
    int customerID;
    int AccNum;
    double AccBalance;
    string email; 
    public:
    BankAccount()
    {
        cout<<"\nUsing default constructor:\n";
        cout<<"\nEnter the name of the customer: ";
        cin>>customerName;
        cout<<"\nEnter the ID of the customer: ";
        cin>>customerID;
        cout<<"\nEnter the Account number of the customer: ";
        cin>>AccNum;
        cout<<"\nEnter the Account Balance of the customer: ";
        cin>>AccBalance;
        cout<<"\nEnter the email ID of the customer: ";
        cin>>email;
    }
    BankAccount(string cusname,int cusID,int acnum,int acbal,string mail)
    {
        cout<<"\nUsing parameterized constructor:\n";
        customerName=cusname;
        customerID=cusID;
        AccNum=acnum;
        AccBalance=acbal;
        email=mail;
    }
    BankAccount(BankAccount & b)
    {
        cout<<"\nUsing the copy constructor:\n";
        customerName=b.customerName;
        customerID=b.customerID;
        AccNum=b.AccNum;
        AccBalance=b.AccBalance;
        email=b.email;
    }
    int getBalance()
    {
        cout<<"\nThe account balance is: ";
        return AccBalance;
    }
    void withdraw()
    {
        int withdrawit;
        cout<<"Enter the amount you want to withdraw: ";
        cin>>withdrawit;
        if(AccBalance>withdrawit)
        {
            cout<<"\nTransaction successful\n";
            cout<<"Remaining Account balance is: "<<AccBalance-withdrawit;
        }
        else if(AccBalance<withdrawit)
        {
            cout<<"\nTransaction failed\n";
            cout<<"Account balance is less then the withdraw amount\n";
        }
    }
    void display()
    {
        cout<<"Customer Name:"<<customerName;
        cout<<"\nCustomer ID"<<customerID;
        cout<<"\nAccount Balance"<<AccBalance;
        cout<<"\nAccount Number"<<AccNum;
        cout<<"\nEmail Address"<<email;
        withdraw();
    }
};

int main()
{
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        BankAccount bb;
        bb.display();
    }
    BankAccount bb1("Debangshu",210,11011,20000,"person2@gmail.com");
    bb1.display();
}
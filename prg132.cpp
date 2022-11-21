/*WAP to demonstrate multiple catch and catch all.*/

#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the value of x";
    cin>>x;
    try
    {
        if(x<0)
        {
            throw x;
        }
        else
        {
            throw 'x';
        }
    }
    catch(int i)
    {
        cout<<"Value of x is less than 0";
    }
    catch (char i)
    {
        cout<<"Value of x is not less than 0";
    }
    return 0;
};
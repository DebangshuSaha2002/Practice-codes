//Overload insertion and extraction operator in cpp 

// extraction operator is for input
// insertion operator is for output

#include<iostream>
using namespace std;

class A
{
    // protected:
    // int arr[5];
    public:
    int arr[5];
    friend istream & operator >>(istream & din,A &obj);
    friend ostream & operator <<(ostream & dout,A &obj);
};

istream & operator >>(istream & din,A & obj)
{
    for(int i=0;i<5;i++)
    {
        din>>obj.arr[i];
    }
    return din;
}

ostream & operator <<(ostream & dout,A & obj)
{
    for(int i=0;i<5;i++)
    {
        dout<<obj.arr[i]<<" ";
    }
    return dout;
}

int main()
{
    A a;
    cin>>a;
    cout<<a;
    return 0;
}
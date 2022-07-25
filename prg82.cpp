//Adding 2 complex numbers using classes and objects
#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int imag;
};

int main()
{
    complex a,b,c;
    cout<<"Enter a and b where a+ib is the first complex number"<<endl;
    cin>>a.real;
    cin>>b.imag;
    cout<<"Enter c and d where c+id is the second complex number"<<endl;
    cin>>b.real;
    cin>>b.imag;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;

    if(c.imag>=0)
    {
        cout<<"Sum of 2 complex numbers = "<<c.real<<"+"<<c.imag<<"i";
    }
    return 0;
    
}
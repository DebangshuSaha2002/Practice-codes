//Question 9 (OR) B
#include<iostream>
using namespace std;

class complex
{
    int r1,r2,i1,i2,a1,a2;
    public:
    complex()
    {
        cout<<"Enter the real and img part of 1st complex num:";
        cin>>r1>>i1;
        cout<<"Enter the real and img part of 2nd complex num:";
        cin>>r2>>i2;
        a1=r1+r2;
        a2=i1+i2;
        cout<<"After adding:\n";
        cout<<a1<<"+"<<a2;
    }

    complex(int r11,int i11,int r22,int i22)
    {
        r1=r11;
        i1=i11;
        r2=r22;
        i2=i22;
        a1=r1+r2;
        a2=i1+i2;
        cout<<"After adding:\n";
        cout<<a1<<"+"<<a2;
    }

    complex(complex &a)
    {
        r1=a.r1;
        i1=a.i1;
        r2=a.r2;
        i2=a.i2;
        a1=r1+r2;
        a2=i1+i2;
        cout<<"After adding:\n";
        cout<<a1<<"+"<<a2;
    }

    ~complex()
    {
        cout<<"\nDestructor";
    }
};

int main()
{
    complex c;
    complex b(10,12,20,60);
    complex e(c);
    return 0;
}
//Overload > and == operator in cpp

#include<iostream>
using namespace std;

class dist
{
    protected:
    int d1;
    public:
    void input()
    {
        cout<<"\nEnter the distance:";
        cin>>d1;
    }

    bool operator ==(dist d)
    {
        if(d1==d.d1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    bool operator >(dist d)
    {
        if(d1>d.d1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void show()
    {
        cout<<"\nDistance: "<<d1;
    }
};

int main()
{
    dist a,b;
    cout<<"Distance 1:\n";
    a.input();
    a.show();
    cout<<"\nDistance 2:\n";
    b.input();
    b.show();
    if(a>b)
    {
        cout<<"Distance 1 is greater then 2\n";
    }
    else if(b>a)
    {
        cout<<"Distance 2 is greater then 1\n";
    }
    
    if(a==b)
    {
        cout<<"Distance 1 is equal to 2\n";
    }
    else
    {
        cout<<"Distance 1 is not equal to 2\n";
    }
    return 0;
}
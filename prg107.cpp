//Swap pvt data memebers of 2 classes using friend func

#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of a:";
        cin>>a;
    }
    friend void swap(A &,B &);
};

class B
{
    int b;
    public:
    void input()
    {
        cout<<"Enter the value of b:";
        cin>>b;
    }
    friend void swap(A &,B &);
};

void swap(A &p,B &q)
{
    int temp;
    temp=p.a;
    p.a=q.b;
    q.b=temp;
    cout<<"a="<<p.a<<endl;
    cout<<"b="<<q.b<<endl;
}

int main()
{
    A l;
    B m;
    l.input();
    m.input();
    swap(l,m);
    return 0;
}
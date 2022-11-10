//Adding 2 distances in the form d3.add(d1,d2)

#include<iostream>
using namespace std;

class A
{
    int feet,inches;
    public:
    void input()
    {
        cout<<"Enter the distance is feet:";
        cin>>feet;
        cout<<"\nEnter the distance in inches:";
        cin>>inches;
        cout<<feet<<" feet "<<inches<<" inches "<<endl;
    }
    void add(A &p,A &q)
    {
        feet=p.feet+q.feet;
        inches=p.inches+q.inches;
        cout<<feet<<" feet "<<inches<<" inches "<<endl;
    }
};

int main()
{
    A d1,d2,d3;
    d1.input();
    d2.input();
    cout<<"\nAfter adding:\n";
    d3.add(d1,d2);
    return 0;
}
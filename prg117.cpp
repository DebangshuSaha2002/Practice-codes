/*Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area

of each shape and display it, using virtual function.
*/

#include<iostream>
using namespace std;

class shape
{
    protected:
    double area;
    public:
    virtual void show()
    {
        cout<<"Virtual base class";
    }
};

class circle:public shape
{
    int r;
    public:
    void area1()
    {
        cout<<"\nEnter the radius of the circle:";
        cin>>r;
        area=(22/7)*r*r;
    }
    void show()
    {
        cout<<"\nArea of the circle is:"<<area;
    }
};

class square:public shape{
    int s;
    public:
    void area2()
    {
        cout<<"\nEnter the side of the square:";
        cin>>s;
        area=s*s;
    }
    void show(){
        cout<<"\nThe area of the square is : "<<area;
    }
};

class triangle:public shape
{
    int b,h;
    public:
    void area3()
    {
        cout<<"\nEnter the base and height of the triangle: ";
        cin>>b>>h;
        area=(0.5)*b*h;
    }
    void show()
    {
        cout<<"\nArea of the triangle is: "<<area;
    }
};

int main()
{
    shape *p;
    circle c;
    c.area1();
    p=&c;
    p->show();

    square s;
    s.area2();
    p=&s;
    p->show();

    triangle t;
    t.area3();
    p=&t;
    p->show();

    return 0;
}
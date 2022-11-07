#include<iostream>
using namespace std;

class student
{
    int age;
    string name;
    public:
    student(int a,string n)
    {
        age=a;
        name=n;
    }
    void display()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
    }
    void * operator new(size_t size)
    {
        cout<<"Overloading new operator\n";
        void * p=malloc(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout<<"Overloading delete operator\n";
        free(p);
    }
};

int main()
{
    student *s=new student(18,"Debangshu");
    s->display();
    delete s;
    return 0;
}
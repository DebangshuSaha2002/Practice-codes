/*WAP to display data of two different types using function template with multiple

arguments.*/

#include<iostream>
using namespace std;

template<typename T1,typename T2>
void input(T1&a , T2&b)
{
    cin>>a;
    cin>>b;
};

template<typename T1,typename T2>
void display(T1 a,T2 b)
{
    cout<<a<<" "<<b<<endl;
};

int main()
{
    int a;
    double b;
    input <int,double> (a,b);
    display <int,double> (a,b);
    return 0;
}
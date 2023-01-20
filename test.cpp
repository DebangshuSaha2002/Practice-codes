//1-WAP to create a class template that stores two data members and swap them using
//template function.
#include <iostream>
using namespace std;
  
// Function template to swap
// two numbers
template <class T>
int swap_numbers(T& x, T& y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
  
// Driver code
int main()
{
    int a, b;
    a = 10, b = 20;
    cout<<"Before swapping value of a and b is : "<<endl;
    cout<<a<<" "<<b<<endl;
    cout<<"\nAfter swapping value of a and b is: "<<endl;
    swap_numbers(a, b);
    cout << a << " " << b << endl;
    return 0;
}
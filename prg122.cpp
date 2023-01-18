// /*Overload new and delete operator*/

// #include<iostream>
// using namespace std;

// class A
// {
//     int age;
//     string name;
//     public:
//     A(int a,string n)
//     {
//         age=a;
//         name=n;
//     }
//     void display()
//     {
//         cout<<"Name is "<<name<<" and age is "<<age<<endl;
//     }

//     void * operator new(size_t size)
//     {
//         cout<<"\nOverloading new operator";
//         void *p=malloc(size);
//         return p;
//     }
//     void operator delete(void *p)
//     {
//         cout<<"\nOverloading delete operator";
//         free(p);
//     }
// };

// int main()
// {
//     A *a=new A (19,"Debangshu");
//     a->display();
//     delete(a);
//     return 0;
// }

//Overloading insertion and extraction operator

#include<iostream>
using namespace std;

class A
{
    int arr[5];
    public:
    istream & operator >>(istream &input)
    {
        cout<<"Overloading Extraction operator:"<<endl;
        cout<<"Enter 5 value"<<endl;
        for(int i=0;i<5;i++)
        {
            input>>arr[i];
        }
        return input;
    }

    ostream & operator <<(ostream &out)
    {
        cout<<"Overloading insertion operator"<<endl;
        for(int i=0;i<5;i++)
        {
            out<<arr[i]<<endl;
        }
        return out;
    }
};

int main()
{
    A c;
    c>>cin;
    c<<cout;
    return 0;
}
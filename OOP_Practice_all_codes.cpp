// //Overloading new and delete operator
// #include<iostream>
// using namespace std;

// class A
// {
//     string name;
//     int age;
//     public:
//     A(string n,int a)
//     {
//         name=n;
//         age=a;
//     }
//     void display()
//     {
//         cout<<"name is "<<name<<" and age is "<<age;
//     }
//     void * operator new(size_t size)
//     {
//         cout<<"Overloading new operator"<<endl;
//         void *p=malloc(size);
//         return p;
//     }
//     void operator delete(void *p)
//     {
//         cout<<"\nOverloading delete operator"<<endl;
//         free(p);
//     }
// };

// int main()
// {
//     A *a=new A("Debangshu",19);
//     a->display();
//     delete(a);
//     return 0;
// }

// //Overloading insertion and extraction operator

// #include<iostream>
// using namespace std;

// class A
// {
//     protected:
//     int arr[5];
//     public:
//     istream & operator >>(istream &input)
//     {
//         cout<<"\nOverloading extraction operator\n";
//         for(int i=0;i<5;i++)
//         {
//             input>>arr[i];
//         }
//         return input;
//     }

//     ostream & operator <<(ostream &out)
//     {
//         cout<<"\nOverloading insertion operator\n";
//         for(int i=0;i<5;i++)
//         {
//             out<<arr[i]<<endl;
//         }
//         return out;
//     }
// };
// int main()
// {
//     A a;
//     a>>cin;
//     a<<cout;
//     return 0;
// }

//Sorting int and float array using function templates

// #include<iostream>
// using namespace std;

// template<typename T>
// class A{
//     T arr[5];
//     public:
//     void input()
//     {
//         for(int i=0;i<5;i++)
//         {
//             cin>>arr[i];
//         }
//     }

//     void sort()
//     {
//         for(int i=0;i<5;i++)
//         {
//             for(int j=i+1;j<5;j++)
//             {
//                 if(arr[i]>arr[j])
//                 {
//                     T temp;
//                     temp=arr[i];
//                     arr[i]=arr[j];
//                     arr[j]=temp;
//                 }
//             }
//         }
//     }

//     void display()
//     {
//         cout<<("\n");
//         for(int i=0;i<5;i++)
//         {
//             cout<<arr[i]<<endl;
//         }
//     }
// };

// int main()
// {
//     A <int> arr;
//     A <float> arr1;
//     arr.input();
//     arr.sort();
//     arr.display();

//     arr1.input();
//     arr1.sort();
//     arr1.display();
//     return 0;
// }

// //Overload == and > and + to add 2 distance

// #include<iostream>
// using namespace std;

// class distance1
// {
//     public:
//     int num;
//     void input()
//     {
//         cout<<"Enter the distance: ";
//         cin>>num;
//     }
//     void display()
//     {
//         cout<<"\nDistance is "<<num<<endl;
//     }
//     int operator == (distance1 d)
//     {
//         if(num==d.num)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     int operator >(distance1 dd)
//     {
//         if(num>dd.num)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     distance1 operator +(distance1 ddd)
//     {
//         distance1 a;
//         a.num=num+ddd.num;
//         return a;
//     }
// };

// int main()
// {
//     class distance1 d1,d2,d3;
//     d1.input();
//     d1.display();
//     d2.input();
//     d2.display();
//     if(d1>d2)
//     {
//         cout<<"\nd1 is greater than d2";
//     }
//     else
//     {
//         cout<<"\nd1 is smaller than d2";
//     }
//     if(d1==d2)
//     {
//         cout<<"\nd1 is equal to d2";
//     }
//     else
//     {
//         cout<<"\nNot equal";
//     }
//     d3=d1+d2;
//     d3.display();
//     return 0;
// }

// //time class operator overloading
// #include<iostream>
// using namespace std;

// class time
// {
//     int h,min;
//     public:
//     void input()
//     {
//         cout<<"\nEnter the hours: ";
//         cin>>h;
//         cout<<"\nEnter the mins: ";
//         cin>>min;
//     }
//     void display()
//     {
//         cout<<h<<" hours "<<min<<" minutes "<<endl;
//     }
//     time operator + (time t)
//     {
//         time tt;
//         tt.h=h+t.h;
//         tt.min=min+t.min;
//         return tt;
//     }
//     bool operator ==(time t)
//     {
//         if(h==t.h && min==t.min)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// int main()
// {
//     class time t1,t2,t3;
//     t1.input();
//     t1.display();
    
//     cout<<("\n");

//     t2.input();
//     t2.display();

//     cout<<("\n");

//     t3=t1+t2;
//     cout<<("\nAfter adding the sum is: ");
//     t3.display();
//     printf("\n");
//     if(t1==t2)
//     {
//         cout<<"Equal";
//     }
//     else
//     {
//         cout<<"Not equal";
//     }
//     return 0;
// }

// //Square and cube of a number using inline functions

// #include<iostream>
// using namespace std;

// class A
// {
//     int num;
//     public:
//     void input()
//     {
//         cout<<"Enter the number: ";
//         cin>>num;
//     }
//     void square();
//     void cube();
// };
// inline void A::square()
// {
//     int sq=num*num;
//     cout<<"Square of the num is: "<<sq<<endl;
// }

// inline void A::cube()
// {
//     int cu=num*num*num;
//     cout<<"Cube of the number is: "<<cu<<endl;
// }

// int main()
// {
//     A a;
//     a.input();
//     a.square();
//     a.cube();
//     return 0;
// }

#include<iostream>
using namespace std;

void swap(int &a,int & b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main()
{
    int one,two;
    cout<<"Enter the first and second num: ";
    cin>>one>>two;
    cout<<"\nBefore swapping:\n";
    cout<<one<<" "<<two;

    cout<<"\nAfter swapping:\n";
    swap(one,two);
    cout<<one<<" "<<two;
    return 0;
}
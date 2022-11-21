//Template code in cpp

#include<iostream>
using namespace std;

template<typename T>
class A
{
    public:
    T arr[5];
    
    void input()
    {
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }

    void display()
    {
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<endl;
        }
    }


    void sort()
    {
        for(int i=0;i<5;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(arr[i]>arr[j])
                {
                    T t;
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }
    }
};

int main()
{
    A <int> arr;
    A <float> arr1;
    arr.input();
    arr.sort();
    arr.display();

    arr1.input();
    arr1.sort();
    arr1.display();
    return 0;
}
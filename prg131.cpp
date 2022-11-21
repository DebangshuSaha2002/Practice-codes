/* WAP to throw and handle’ array out of bound’ exception.*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[5];
    int size=sizeof(arr)/sizeof(arr[0]);
    int index;
    cout<<"Enter the index where u want to insert the value: ";
    cin>>index;
    try
    {
        if(index<size)
        {
            cout<<"Enter the num to insert:";
            cin>>n;
            arr[index]=n;
        }
        else
        {
            throw(index);
        }
    }

    catch(int i)
    {
        cout<<"Array out of bound exception";
    }
    
    return 0;
}
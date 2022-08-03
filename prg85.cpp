#include<iostream>
using namespace std;
class Complex
{
    private:
        int realNumber;
        int imagNumber;
    public:
    void input()
    {
        cout<<"Enter the real part of the complex number: ";
		cin>>realNumber;
	    cout<<"Enter the imaginary part of the complex number: ";
        cin>>imagNumber;
    }

    void display()
    {
        cout<<realNumber<<"+"<<imagNumber<<"i"<<endl;
    }
   
};

int main()
{
        Complex arr[100];
        cout<<"Enter 10 complex numbers\n";
		for(int i=0; i<10; i++){
			cout<<"Complex number:  "<<(i+1)<<endl;
			arr[i].input();
        
		}
		cout<<"The 10 entered complex numbers are\n";
		for(int i=0; i<10; i++){
			arr[i].display();
		}
    return 0;
}
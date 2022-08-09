#include <iostream>
using namespace std;

class interest{
int n;
float rate,p;
public:
void get(){
    cout<<"\nEnter principle Amount & no. of year: \n";
    cin>>p>>n;
}
void cal(float rate){
    float si;
    si=p*(1+(rate/100)*n);
    cout<<"\n\nSimple Interest is: "<<si;
}
};
int main(){
interest i;
i.get();
i.cal(4);

}


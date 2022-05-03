#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int s1=10;
    int s2=12;
    int s3=10;
    int s=0;
    s=(s1+s2+s3)/2;
    double area=(double) sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout<<"The area of the triangle is = "<<area<<endl;

    //Height of triangle when base is 12cm
    int base=12;
    int b=base/2;
    int side1=10;
    double height=(double) sqrt(side1*side1+b*b);
    cout<<"The height of the triangle will be "<<height<<"cm"<<endl;
    return 0;
}


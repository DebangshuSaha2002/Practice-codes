#include<iostream>
using namespace std;
class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total_marks;
    public:
        void take()
        {
            cout<<"Name: ";
            cin>>name;
            cout<<"Roll: ";
            cin>>rollNo;
            cout<<"Total Marks: ";
            cin>>total_marks;
        }
        void show()
        {
            cout<<"The student details are as follows: \n";
            cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total_marks<<endl;
        }
};
int main()
{
    int n;
    cout<<"Enter the total number of students \n";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the student details:\n";
        s[i].take();
    }
    cout<<endl;
    for(int j=0;j<n;j++)
    {
        s[j].show();
    }
    return 0;
}
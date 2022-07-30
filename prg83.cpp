/*WAP to input name, roll number and marks in 5 subjects for n number of students. Write
functions to:-
a. Find total marks and percentage of all n students.
b. Display details of a student with a given roll number.
c. Display the details for all the students having percentage in a given range.
d. Sort the array in ascending order of marks. */
#include <iostream>
#include <string.h>
using namespace std;
struct Student 
{
    string name;
    int roll;
    float marks[5];
};
void total (Student s[],int a,float t[],float per[]);
void rollno (Student s[],int a,float t[],float per[]);
void range (Student s[],int a,float per[]);
void sort (Student s[],int a);
int main ()
{
    int n;
    cout << "Enter number of students.\n";
    cin >> n;
    Student s[n];
    for(int i=0;i<n;i=i+1)
    {
        cout << "Student " << i+1;
        cout << "\nEnter Name.\n";
        cin >> s[i].name;
        cout << "Enter roll no.\n";
        cin >> s[i].roll;
        cout << "Enter marks in 5 subjects. \n";
        for(int j=0;j<5;j=j+1)
        {
            cout << "Subject " << j+1 << "\n";
            cin >> s[i].marks[j];
        }
        cout << "\n";
    }
    float t[n];
    float per[n];
    total(s,n,t,per);
    rollno(s,n,t,per);
    range(s,n,per);
    sort(s,n);
}
void total (Student s[],int a,float t[],float per[])
{
    
    for(int i=0;i<a;i++)
    {
        t[i]=s[i].marks[0]+s[i].marks[1]+s[i].marks[2]+s[i].marks[3]+s[i].marks[4];
        per[i]=t[i]/5;
    }
    for (int i=0;i<a;i++)
    {
        cout << "Roll No. " << s[i].roll << "\tTotal=" <<t[i]<<"\tPercentage="<<per[i]<<"\n";
    }
}
void rollno (Student s[],int a,float t[],float per[])
{
    int b;
    cout << "Enter roll no. to search.";
    cin>>b;
    for(int i=0;i<a;i++)
    {
        if (s[i].roll == b)
        {
            cout << "Name : "<<s[i].name<<"\tRoll No. : "<<s[i].roll<<"\tTotal:"<<t[i]<<"\tPercentage:"<<per[i];
            break;
        }
    }
}
void range (Student s[],int a,float per[])
{
    float u,l;
    cout << "\nEnter upper limit of range.\n";
    cin >> u;
    cout << "Enter lower limit of range.\n";
    cin >> l;
    for(int i=0;i<a;i++)
    {
        if ((per[i] >l) && (per[i]<u))
        {
            cout << "Name : "<<s[i].name<<"\tRoll No. : "<<"\tPercentage:"<<per[i]<<"\n";
        }
    }
}
void sort (Student s[],int a)
{
    float small;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=j+1;k<5;k++)
            {
                if(s[i].marks[k] < s[i].marks[j])
                {
                    float d = s[i].marks[j];
                    s[i].marks[j]=s[i].marks[k];
                    s[i].marks[k]=d;
                }
            }
        }
    }
    
}
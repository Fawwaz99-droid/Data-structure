#include<iostream>
using namespace std;
struct Student
{
    int rollNo;
    string name;
    float percentage;
};
int main()
{
    Student s[100];
    int n;
    cout<<"enter number of student";
        cin>>n;
    for(int i=0; i<n;i++)
        {
            cout<<"enter detail of student"<<i+1<<endl;
            cout<<"enter roll number";
            cin>>s[i].rollNo;
            cout<<" enter name of student";
            cin>>s[i].name;
            cout<<"enter percentage of student";
            cin>>s[i].percentage;
            
        }
    cout<<"\n----STUDENT RECORD-----\n";
    cout<<"rollNo.\tName\tPercentage\n";
    for(int i = 0;i<n;i++)
        {
            cout<<s[i].rollNo<<"\t\t"
                <<s[i].name<<"\t\t"
                <<s[i].percentage<<"%\n";
        }
    return 0;
}

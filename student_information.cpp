#include<iostream>
using namespace std;
int main()
{
    string name;
    int rollNo;
    float marks;
    cout<<"enter roll number: ";
    cin>>rollNo;
cin.ignore();

cout<<"enter name: ";
getline(cin,name);

cout<<"enter marks: ";
cin>>marks;

cout<< "\n---Student record ---\n";
cout<< "Roll No: "<<rollNo<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Marks: "<<marks<<endl;

return 0;
}
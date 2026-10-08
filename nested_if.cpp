#include<iostream>
using namespace std;
int main()
{
    int age=20;
    bool hasTicket=true;

        if(age>=18){
           if(hasTicket){
            cout<<"entry alowed";
        } else {
           cout<<"buy a ticket first";
        }
    } else {
    cout<<"not eligible by age";
}
return 0;
}
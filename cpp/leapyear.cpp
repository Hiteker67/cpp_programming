#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a Year: "<<endl;
    cin>>year;
    if(year%400==0)
    {
        cout<<"Leap Year"<<endl;
    }
    else if(year%100==0)
    {
        cout<<"Not Leap Year"<<endl;
    }
    else if(year%4==0)
    {
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Not a Leap Year"<<endl;
    }
}

#include<iostream>
using namespace std;

int main()
{
    int n, f;
    cout<<"Enter a Number: "<<endl;
    cin>>n;
    f=n;

    for(int i=1; i<n; i++)
    {
        cout<<f<<"*"<<i<<"=";
        f=f*i;
        cout<<f<<endl;
    }
    cout<<"Factorial Value is : "<<f<<endl;
}

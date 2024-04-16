#include<iostream>
using namespace std;

int main()
{
    int n, t, r, pal=0;
    cout<<"Enter a Number: ";
    cin>>n;
    t=n;
    while(n!=0)
    {
        r=n%10;
        pal=pal*10+r;
        n=n/10;

    }
    if(t==pal)
    {
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not Palindrome Number"<<endl;
    }
}

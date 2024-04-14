#include<iostream>
using namespace std;

int main(){

    // Swappimg two value with third variable

    /*int a,b,c;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Swapping value is :"<<a<<" "<<b<<endl;
    return 0;*/

    // Swapping two value without using third value
    int a,b;
    cout<<"Enter two value: "<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swapping value is :"<<a<<" "<<b<<endl;
    return 0;

}

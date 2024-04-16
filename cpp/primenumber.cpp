#include<iostream>
using namespace std;

int main(){
    
    int i, n;
    cout<<"Enter a Number: ";
    cin>>n;
    /*
    // Prine of a number
    
    for( i=2; i<n; i++){
        if(n%i==0){
            cout<<"Not a Prime Number"<<endl;
            break;
        }
    }
    if(i == n)
    {
        cout<<"Prime Number"<<endl;;
    }
    return 0;
    */

//    Prime number at Nth Number

    int k;
    for( i=2; i<n; i++){
        for(k=2; k<i; k++)
        {
            if(i%k==0)
            {
                cout<<"";
                break;
            }
        }
        if(k==i)
        {
            cout<<k<<endl;
        } 
    }
}

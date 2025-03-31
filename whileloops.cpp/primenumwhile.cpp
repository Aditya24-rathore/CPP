#include<iostream>
using namespace std;
int main()
{
    int p,n,f=0;
    cout<<"enter number";
    cin>>p;
    n=p-1;
    while(n>1)
    {
        if(p%n==0){
            f=1;
            break;
        }
        n--;
    }
    if(f==1)
    {
        cout<<"it is not a prime num";
    }
    else{
        cout<<"it is prime num";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int a,k=1;
    cout<<"enter any num";
    cin>>a;
    for(a;a>1;a--){
        k=k*a;
    }
    cout<<"factorial="<<k;
}
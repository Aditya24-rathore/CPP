#include<iostream>
using namespace std;
int main()
{
    int a,b,j=1,i;
    cout<<"enter base";
    cin>>a;
    cout<<"enter power";
    cin>>b;
    for(i; i<=b; i++){
      j=j*a;
    }
    cout<<j;
}
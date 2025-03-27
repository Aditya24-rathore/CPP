#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int c;
    int p;
    cout<<"enter range";
    cin>>p;
    cout<<a<<"\t"<<b<<"\t";
    for(int i=1;i<=p;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"\t";
    }
}
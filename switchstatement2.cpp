#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter any num\n";
    cin>>a>>b;
    cout<<"\n select 1 for +,select 2 for *,select 3 for -\n";
    cin>>c;
    switch(c){
        case 1:{
            cout<<a+b;
            break;
        }
        case 2:{
            cout<<a*b;
            break;
        }
        case 3:{
            cout<<a-b;
            break;
        }
    }
}
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 1 no\n";
    cin>>a;
    cout<<"enter 2 no\n";
    cin>>b;
    cout<<"enter 3 no\n";
    cin>>c;
     if(a>b && a>c){
         cout<<a<<"is larger no";
     }
     else if(b>a && b>c){
          cout<<b<<"is larger no";
     }
     else if(a==b && b==c){
         cout<<b;
     }
     else if(a==b && a!=c){
         cout<<a<<"is larger no";
     }
      else if(b==c && b!=a){
         cout<<b<<"is larger no";
     }
     else if(c==a && c!=b){
         cout<<c<<"is larger no";
     }
     else{
         cout<<c<<"is larger no";
     }
    
}
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

//result
#include<iostream>
using namespace std;
int main()
{
    float a,b,c,total,percent;
    cout<<"enter physics no\n";
    cin>>a;
    cout<<"enter chemistry no\n";
    cin>>b;
    cout<<"enter maths no\n";
    cin>>c;
     total=a+b+c;
     percent=(total/300)*100;
    if(percent>=60 && percent<=100)
    {
        cout<<"result:"<<"pass with first division\n";
    }
    else if(percent>=50 && percent<=59)
    {
         cout<<"pass with second  division\n";
    }
    else if(percent>=35 && percent<=49)
    {
         cout<<"pass with third  division\n";
    }
    else{
        cout<<"result:"<<"fail";
    }
}


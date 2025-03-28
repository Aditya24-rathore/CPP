#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter any no\n";
    cin>>a;
    cout<<"\n select 1foreven&odd,2 for square\n";
    cin>>b;
    switch(b)
    {
        case 1:
        {
            if(a%2==0){
                cout<<"even no";
            }
            else{
                cout<<"odd no";
            }
            break;
        }
        case 2:{
            cout<<a*a;
            break;
        }
    }
}
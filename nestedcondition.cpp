#include<iostream>
using namespace std;
int main()
{
    int pass;
    cout<<"enter ur password";
    cin>>pass;
    if(pass>=1000 && pass<=9999)
    {
        if(pass==2025||pass==2005){
            int otp;
            cout<<"enter otp";
            cin>>otp;
            if(otp==1000)
            {
                cout<<"please enter amount";
            }
            else{
                cout<<"re-enter otp";
            }
        }
        else{
            cout<<"re-enter password";
        }
    }
    else{
        cout<<" password is invalid";
    }
}
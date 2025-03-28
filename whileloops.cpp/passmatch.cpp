#include<iostream>
using namespace std;
int main()
{
    int a;
    int c=1;
    cout<<"enter your password"<<"\n";
    while(c<=3){
        cin>>a;
        if(a==2025){
            cout<<"welcome"<<"\n";
        }
        else{
            cout<<"incorrect password"<<"\n";
        }
        c++;
    }
    if(c==4){
        cout<<"try after 24hr"<<"\n";
    }
}

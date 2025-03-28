#include <iostream>
using namespace std;
int main(){
    int n,s=0,a=0,k;
    cout<<"enter 3 digit num";
    cin>>n;
    k=n;
    if(n<1000 && n>99){
        do{
            a=n%10;
            s=s+(a*a*a);
            n=n/10;
        }
        while(n>0);
        if(k==s){
            cout<<"it is an armstrong number";
        }
        else{
            cout<<"not armstrong";
        }
    }
    else{
        cout<<"invalid 3 digit no";
    }
}

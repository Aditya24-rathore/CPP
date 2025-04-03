#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter"<<n<<"values";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int largest=a[0];
    for(int i=1;i<n;i++){
        if(largest<a[i]){
            largest=a[i];
        }
    }
    cout<<largest;
}
#include<iostream>
using namespace std;
int main()
{
    for(char row='A';row<='C';row++){
        for(char col='A';col<=row;col++){
          cout<<col<<" ";
        }
        cout<<"\n";
    }
}
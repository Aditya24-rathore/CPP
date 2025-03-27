#include<iostream>
using namespace std;
int main()
{
    for(char row='a';row<='c';row++){
        for(char col='a';col<=row;col++){
          cout<<col<<" ";
        }
        cout<<"\n";
    }
}
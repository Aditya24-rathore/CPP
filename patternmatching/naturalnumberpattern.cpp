#include<iostream>
using namespace std;
int main()
{
    int k=1;
    for(int row=1;row<=3;row++){
        for(int col=1;col<=row;col++){
          cout<<k<<" ";
          k++;
        }
        cout<<"\n";
    }
}
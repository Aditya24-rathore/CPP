#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first no";
    cin>>a;
    cout<<"enter second no";
    cin>>b;
    if(a>b)
    {
        cout<<a;
    }
    else{
        cout<<b;
    }
}

//Wap to print a no is even or odd
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter any number";
    cin>>a;
    if(a%2==0)
    {
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}

//Wap to print a char is vowel or constant
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter any character";
    cin>>ch;
    if(ch=='a','e','i','o','u'){
        cout<<"the character is vowel";
    }
    else{
        cout<<"the character is constant";
    }
}
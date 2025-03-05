//program for addition,subtraction,multiplication,division
#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter 1 no";
  cin>>a;
  cout<<"enter 2 no";
  cin>>b;
  cout<<"sum="<<a+b;
  cout<<"subtract="<<a-b;
  cout<<"multiply="<<a*b;
  cout<<"division="<<a%b;
  cout<<"division="<<a/b;
}

//program to find area of circle
#include<iostream>
using namespace std;
int main()
{
    const float p=3.14;
    float radius;
    cout<<"enter radius of circle";
    cin>>radius;
    float area;
    area=p*radius*radius;
    cout<<"area of the circle"<<area;
}


//program to find square of any number
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter no";
    cin>>a;
    cout<<"square of number is:"<<a*a;
}

//program to find cube of any number
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter no";
    cin>>a;
    cout<<"cube of a number is:"<<a*a*a;
}
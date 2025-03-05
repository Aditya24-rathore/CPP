// arthemetic operator
#include <iostream>
using namespace std;
int main()
{
  int a,b;
  a=20;
  b=30;
  cout<<a+b;
}

// arthemetic operator
#include <iostream>
using namespace std;
int main()
{
  int a,b;
  a=20;
  b=30;
  cout<<a*b;
}

// postdecrement (unary operator)
#include<iostream>
using namespace std;
int main ()
{
  int a,b,c;
  a=20;
  b=a++;
  cout<<b;
}

// logical operator
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  a=10;
  b=1;
  c=a&&b;
  cout<<c;
  c=a||b;
  cout<<c;
  c=!b;
  cout<<c;

}

// relational operator
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  a=20;
  b=60;
  c=a<b;
 cout<<c;

a=30;
b=20;
c=a<=b;
cout<<c;

c=a>b;
cout<<c;

c=a==b;
cout<<c;

c=a!=b;
cout<<c;
}

// preincrement(unary operator)
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=20;
    b=60;
    c=++a;
    cout<<c;
}

// ternary operator
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first no";
    cin>>a;
    (a%2==0)?cout<<"even":cout<<"odd";
}
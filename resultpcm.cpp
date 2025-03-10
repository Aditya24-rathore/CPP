#include<iostream>
using namespace std;
int main()
{
    float p,c,m,tot,per;
    cout<<"enter physics no\t";
    cin>>p;
    cout<<"enter chemistry no\t";
    cin>>c;
    cout<<"enter maths no\t";
    cin>>m;
    tot=p+c+m;
    per=tot/3;
    if(p<0 || p>100 || c<0 || c>100 || m<0 || m>100)
    {
        cout<<"invalid";
    }
    else if (p<35 && c>=35 && m>=35)
    {
        cout<<"supply in physics";
    }
    else if (m<35 && c>=35 && p>=35)
    {
        cout<<"supply in maths";
    }
    else if (c<35 && p>=35 && m>=35)
    {
        cout<<"supply in chemistry";
    }
    else if(c<35 && m<35 && p>=35)
    {
        cout<<"fail";
    }
    else if(m<35 && c<35 && p>=35)
    {
        cout<<"fail";
    }
    else if(p<35 && c<35 && p>=35)
    {
        cout<<"fail";
    }
    else if(p<35 && m<35 && c<35){
        cout<<"fail";
    }
    else if(per>60)
    {
        cout<<"marks="<<tot<<"per="<<per<<"%"<<"pass with first division";
    }
    else if(per>=50 && per<60)
    {
        cout<<"marks="<<tot<<"per="<<per<<"%"<<"pass with second division";
    }
    else if(per>=35 && per<50)
    {
        cout<<"marks="<<tot<<"per="<<per<<"%"<<"pass with third division";
    }
    else{
        cout<<"ok";
    }
}
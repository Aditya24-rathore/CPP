#include<iostream>
using namespace std;
int main()
{
    int a;
    char c;
    cout<<"enter any char";
    cin>>c;
    cout<<"select 1 for vowel or consonent,select 2 for gender";
    cin>>a;
    switch(a)
    {
        case1:{
            if(c=='a'|| c=='e'|| c=='i'|| c=='o'||c=='u')
            {
                cout<<"char is vowel";
            }
            else{
                cout<<"char is consonant";
            }
            break;
        }
        case2:{
            if(c=='m'||c=='M')
            {
                cout<<"Male";
            }
            else if(c=='f'||c=='F')
            {
                cout<<"Female";
            }
            else{
                cout<<"other";
            }
            break;
        }
        default:{
            cout<<"invalid choice";
        }
    }

}
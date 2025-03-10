// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter any number";
//     cin>>a;
//     cout<<a;
//     cybrom:
//     if(a<100){
//         a--;
//         goto cybrom;
//     }
//     else{
//         cout<<"enter valid no";
//     }
// }

//wap to print a table
#include <iostream>
using namespace std;
int main() {
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    START:
    cout << num << " x " << i << " = " << num * i << endl;
    i++;
    if (i <= 10) {
        goto START;  
    }
    
}

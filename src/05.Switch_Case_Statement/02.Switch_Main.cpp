#include<iostream>
using namespace std;

int main()
{
    char button;
     cout<<"Input a character"<<endl;
     cin>>button;
    
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Hi"<<endl;
        break;
    case 'd':
        cout<<"Parvez"<<endl;
        break;
    case 'e':
        cout<<"Dhaka"<<endl;
        break;
    default:
        cout<<"i'm still learning"<<endl;
        break;
    }
    return 0;
}
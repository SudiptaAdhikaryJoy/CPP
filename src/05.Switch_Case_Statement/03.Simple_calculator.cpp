#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Input 2 Numbers:";
    cin>>n1>>n2;

    char op;
    cout<<"Enter the operations";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    
    default:
    cout<<"enter another operator"<<endl;
        break;
    }
    return 0;
}
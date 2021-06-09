#include<iostream>
using namespace std;
int main()
{
     char button;
     cout<<"Input a character"<<endl;
     cin>>button;

     if(button=='a')
     {
         cout<<"Hello"<<endl;
     }
     else if(button=='b')
     {
         cout<<"Namaste"<<endl;
     }
     else if(button=='c')
     {
         cout<<"Kaisha Ho !"<<endl;
     }
     else if(button=='d')
     {
         cout<<"Kemon acho!"<<endl;
     }
     else if(button=='e')
     {
        cout<<"Bhalo achi "<<endl;
     }
     else{
         cout<<"I'm Still Learning"<<endl;
     }
     return 0;
}
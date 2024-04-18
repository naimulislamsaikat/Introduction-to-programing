/*Write a program that reads in two integers and determines and prints
if the first is a multiple of the second. [Hint: Use the modulus operator.]*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int X,Y;
    cout<<"what is the 1st value = ";
    cin>>X;
    cout<<"what is the 2nd value = ";
    cin>>Y;
    if(X%Y==0)
    {
        cout<<"1st one is multiple of the second "<<endl;
    }
    else
    {
        cout<<"1st one is not multiple of the second"<<endl;
    }
    return 0;
}

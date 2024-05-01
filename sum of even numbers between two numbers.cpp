/*Write a program that take two integer numbers and display the sum of even numbers between these two input numbers.
First Number: 3
Second Number: 10 , Sum of Even numbers between 3 and 10 is: 18*/

#include<iostream>
using namespace std;
int main ()
{
    int v1,v2,sum=0,n;
    cout<<"Enter the 1st value= ";
    cin>>v1;
    cout<<"Enter the 2nd value= ";
    cin>>v2;
    for(n=v1+1; n<v2; n++)
    {
        if(n%2==0)
        {
            sum=sum+n;
        }
    }
    cout<< "The value is= "<<sum<<endl;

    return 0;
}

//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
//Sample Output: Input the first number: 25  Input the second number: 15  The Greatest Common Divisor is: 5

#include<iostream>
#include<math.h>
using namespace std;
int main (){
int a,b,c;
    cout<<"Enter 1st value: ";
cin>>a;
    cout<<"Enter 2nd value: ";
cin>>b;

while(b!=0){
    c=a%b;
    a=b;
    b=c;
           }
    cout<<"The program in C++ to find the Greatest Common Divisor (GCD) of two numbers is :"<<a<<endl;
return 0;
}


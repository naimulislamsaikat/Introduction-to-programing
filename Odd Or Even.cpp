/*Write a program that reads two integer and determines and prints whether
they are odd or even. Also find the maximum of two number.*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int number_to_test_1,number_to_test_2,reminder;
    cout<<"Enter your 1st number to be tested : ";
    cin>>number_to_test_1;
    cout<<"Enter your 2nd number to be tested : ";
    cin>>number_to_test_2;
    if(number_to_test_1 %2 == 0)
    {
        cout<<"Inside it's the body";
        cout<<". 1st number is an even number"<<endl;
    }
    else
    {
        cout<<"Inside it's the body";
        cout<<". 1st number is an odd number"<<endl;
    }
    if(number_to_test_2 %2== 0)
    {
        cout<<"Inside it's the body";
        cout<<". 2nd number is an even number"<<endl;
    }
    else
    {
        cout<<"Inside it's the body";
        cout<<". 2nd number is an odd number";
    }
    return 0;
}

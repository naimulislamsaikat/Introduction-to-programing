//Find Multiplication Table of any given Number Sample Output:
//Input a number to find it’s Multiplication Table: 9
//9 X 1 = 9
//9 X 2 = 18
//9 X 3 = 27
//9 X 4 = 36
//9 X 5 = 45
//9 X 6 = 54
//9 X 7 = 63
//9 X 8 = 72
//9 X 9 = 81
//9 X 10 = 90

#include<iostream>
#include<math.h>
using namespace std;
int main(){
int i,x,y;
    cout<<"Input a number to find it's multiplication: ";
        cin>>x;
    for(i=1;i<=10;i++)
{
        y=i*x;
    cout<<x<<" X "<<i<<" = "<<y<<endl;
}
return 0;
}

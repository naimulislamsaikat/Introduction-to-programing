// Create a BMI calculator program that reads the user’s weight in kilogram and height in meter.
// Then calculates and displays the user’s body mass index.
// BMI= body mass index              m=mass (in kilograms)              h=height (in meters


#include<iostream>
#include<math.h>
using namespace std;
int main(){

 int m,h;
    cout<<"What is the mass(in kilograms): ";
 cin>>m;
    cout<<"What is the height(in meters): ";
 cin>>h;
    cout<<"The body mass index is= "<< m/pow(h,2)<<endl;

return 0;
}

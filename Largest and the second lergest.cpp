/* Write a C++ program to find largest and second largest element in a given array of
integers. */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many digits you wanna test: ";
    cin>>n;
    int arry[n],mx1,mx2,mx3;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the vale : ";
        cin>>arry[i];
    }

    mx1= arry[0];
    for(int i=1; i<n; i++)
    {
        if(mx1<arry[i])
        {
            mx1=arry[i];
        }
    }
    cout<<"1st Largest number : "<<mx1<<endl;

    mx2=arry[0];
    for(int i=1; i<n; i++)
    {
        if(mx2<arry[i] && arry[i]!= mx1)
        {
            mx2=arry[i];
        }
    }
    cout<<"2nd Largest number : "<<mx2<<endl;

    mx3=arry[0];
    for(int i=1; i<n; i++)
    {
        if(mx3<arry[i] && arry[i]!= mx1 && arry[i]!=mx2)
        {
            mx3=arry[i];
        }
    }
    cout<<"3rd Largest number : "<<mx3<<endl;

    return 0;
}

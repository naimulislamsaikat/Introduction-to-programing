/*Find the Fibonacci series of N terms.
Sample Output:
Your input is: 9
Fibonacci Series: 0 1 1 2 3 5 8 13 21*/

#include<iostream>
using namespace std;
int main()
{
    int N,v1,v2,i,sum;
    cout<<"Enter any number : ";
    cin>>N;
    cout<<"Enter the 1st number that you want to see as : ";
    cin>>v1;
    cout<<"Enter the 2nd number that you want to see as : ";
    cin>>v2;
    cout<<v1<<" "<<v2;

    for(i=2; i<N; i++)
    {
        sum=v1+v2;
        v1=v2;
        v2=sum;

    cout<<" "<<sum;
    }
    return 0;
}

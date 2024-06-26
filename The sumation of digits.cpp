#include<iostream>
#include<math.h>
using namespace std;

int main(){
 int n,i,sum=0;
 cout<<"Enter the Number : " ;
 cin>>n;
 
 while(n>0){
  i=n%10;
  sum=sum+i;
  n=n/10;
}
 cout<<"\nThe summation of all digits is :" <<sum<<endl;
return 0;
}

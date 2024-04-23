/*Calculate the Factorial of a number.
Sample Output:
Your input to calculate factorial: 5
Factorial of 5 is 120 */

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,factorial=1,i;
    cout<<"Your input to calculate factorial= ";
    cin>>n;
    for(i=1; i<=n; i++){
        factorial=factorial*i;
    }
    cout<<"Factorial of the number is = "<<factorial<<endl;
return 0;
}

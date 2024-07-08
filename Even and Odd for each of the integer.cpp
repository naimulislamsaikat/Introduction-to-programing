/*Take N integers as input and display Even and Odd for each of the integer. */

#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the value: ";
    cin>>N;
    int num[N],reminder;
    for(int i=0; i<N; i++){
        cout<<"Enter the number: ";
        cin>>num[i];
    }
    for(int i=0; i<N; i++){
        reminder=num[i]%2;
        if (reminder==0){
            cout<<"Even: "<<num[i]<<endl;
        }
        else cout<<"Odd: "<<num[i]<<endl;
    }
return 0;
}

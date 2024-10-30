/*
Question:

Write a C++ program with array to find the summation of the input numbers and reverse the given input numbers.
As an example:
Array Limit: 5 (it’s mean the index number)
Input numbers: 10 20 30 40 50
Summation: 150
Reverse Elements: 50 40 30 20 10

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the array limits you want to entry: ";
    cin >> n;
    float a[n];
    float sum = 0;

    for( int i = 0; i < n; i++ ){
        cout << "a[" << i << "]=";
        cin >> a[i];
    }

    /*
    //Output of the taken inputs..
    for( int j = 0; j < n; j++ ){
        cout << "a[" << j << "]=" << a[j] << endl;
    }*/
    for( int j = 0; j < n; j++ ){
        sum = sum + a[j];
    }
    cout << endl << "Sum is: " << sum << endl;

    cout << "Array in Reverse order: " << endl;
    for( int i = n-1; i >= 0; i-- ){
        cout << "a[" << i << "]=" << a[i] << endl;
    }

return 0;
}

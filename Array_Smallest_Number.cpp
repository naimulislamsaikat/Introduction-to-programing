/*
Question:

Write a C++ program and give inputs from users and find the smallest number of array.
As an example:
Enter the number of elements in the array: 2
Enter the elements at index [0]: 1
Enter the elements at index [1]: 5
The smallest number in the index is: 1

*/

#include <iostream>
using namespace std;

int main() {

    int numbers[100];
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {

            cout << "Enter the element at index [" << i << "] : ";
            cin >> numbers[i];
  }
    cout << endl;

    int smallest = numbers[0];

    for (int i = 1; i < n; i++) {
            if (numbers[i] < smallest) {
                smallest = numbers[i];
            }
    }

    cout << "The smallest number in the array is " << smallest << endl;

return 0;
}

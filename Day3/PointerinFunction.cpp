//Q-4. Assignments on passing pointers in functions


#include <iostream>
using namespace std;

// Function declaration
int sumArray(int arr[], int n);

// Function definition
int sumArray(int arr[], int n) {

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int (*ptr)(int[], int);

    ptr = sumArray;

    int sum = ptr(arr, 5);

    cout << "Sum of array elements = " << sum;

    return 0;
}



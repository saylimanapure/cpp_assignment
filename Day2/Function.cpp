// 1. Implement functions through your program.

#include <iostream>
using namespace std;

// Function Declaration
int add(int, int);
int subtract(int, int);


// Function Definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}



int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Function Calls
    cout << "Addition = " << add(a, b);
    cout << "Subtraction = " << subtract(a, b);



    return 0;
}

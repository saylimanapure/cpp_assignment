//1. Implement   Conditional Statements:
//     if , else if , else,switch


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;
    if (n > 0)
        cout << "Positive number\n";
    else if (n < 0)
        cout << "Negative number\n";
    else
        cout << "Zero\n";

    int choice;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\n Addition";
            break;
        case 2:
            cout << "\n Subtraction";
            break;
        case 3:
            cout << "\n Multiplication";
            break;
        default:
            cout << "\n Invalid choice";
    }

    return 0;
}

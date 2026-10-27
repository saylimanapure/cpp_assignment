// Loops
// for loop ,while loop , do while loop

#include <iostream>
using namespace std;

int main() {
    cout << "\n For loop";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    cout << "\n While loop ";
    int j = 1;
    while (j <= 10) {
        cout << j << " ";
        j++;
    }

    cout << "\n Do-while loop ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 10);

    return 0;
}

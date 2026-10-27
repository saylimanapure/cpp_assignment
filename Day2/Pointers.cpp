//Pointers


#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;

    cout << "Value of num = " << num << endl;
    cout << "Address of num = " << &num << endl;
    cout << "Address stored in ptr = " << ptr << endl;
    cout << "Value using pointer = " << *ptr << endl;

    *ptr = 20;

    cout << "Updated value of num = " << num << endl;

    ptr = ptr + 1;
    cout<<"\n ptr = "<<ptr;
    cout<<"\n *ptr = "<<*ptr;
    cout<<"\n &ptr = "<<&ptr;

    return 0;
}

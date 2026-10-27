// Q-2. Implement Abstract classes in your program
//  Using virtual and pure virtual functions implement hierarchy of computer printers

#include <iostream>
#include <string>
using namespace std;

class Computer {
protected:
    string modelname;

public:
    Computer(string m) {
        modelname = m;
    }

    virtual void display() = 0;

    virtual ~Computer() {
        cout << "\n Destructor of Computer";
    }
};

class Printer : public Computer {
    string printermodel;
    int printspeed;

public:
    Printer(string m, string p,int s) : Computer(m) {
        printermodel = p;
        printspeed = s;

    }

    void display() {
        cout << "\nComputer Model: " << modelname;
        cout << "\nPrinter Model: " << printermodel;
        cout << "\nPrint Speed: " << printspeed << " pages/minute";
    }
    ~Printer() {
        cout << "\nDestructor of Printer";
    }
};

int main() {
    Printer obj("Dell", "HP",30);

    obj.display();
    Computer *ptr = &obj;
    ptr->display();

    return 0;
}

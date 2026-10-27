//Q-1. Design a hierarchy of computer printers. Use multiple inheritance in your hierarchy.


#include <iostream>
using namespace std;

class Computer {
protected:
    string modelname;
    int ramsize;

public:
    Computer() {
        cout << "\n Default constructor of Computer";
        modelname = "Unknown";
        ramsize = 0;
    }

    Computer(string m, int r) {
        cout << "\n Parameterized constructor of Computer";
        modelname = m;
        ramsize = r;
    }

    ~Computer() {
        cout << "\n Destructor of Computer";
    }

    void displayComputer() {
        cout << "\nComputer Model: " << modelname;
        cout << "\nRAM: " << ramsize << " GB";
    }
};

class Printer : public Computer {
    string printerModel;
    int printSpeed;

public:
    Printer() {
        cout << "\n Default constructor of Printer";
        printerModel = "Unknown";
        printSpeed = 0;
    }

    Printer(string m, int r, string pm, int ps) : Computer(m, r) {
        cout << "\n Parameterized constructor of Printer";
        printerModel = pm;
        printSpeed = ps;
    }

    ~Printer() {
        cout << "\nDestructor of Printer";
    }

    void displayPrinter() {
        displayComputer();
        cout << "\nPrinter Model: " << printerModel;
        cout << "\nPrint Speed: " << printSpeed << " pages/minute";
    }
};

int main() {
    Printer obj("Dell ", 8, "HP ", 30);

    obj.displayPrinter();

    return 0;
}

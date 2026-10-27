//Q-4. Implement diamond problem with real life example


#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int id;
    string name;
    double salary;

public:
    Employee() {
        cout << "\n Default constructor of Emp";
        id = 0;
        name = "Unknown";
        salary = 0;
    }

    Employee(int i, string n, double s) {
        cout << "\n Parameterized constructor of Emp";
        id = i;
        name = n;
        salary = s;
    }

    ~Employee() {
        cout << "\n Destructor of Emp";
    }

    void displayEmployee() {
        cout << "\n Employee ID: " << id;
        cout << "\n Employee Name: " << name;
        cout << "\n Salary: " << salary;
    }
};

class Manager : virtual public Employee {
protected:
    string dept;

public:
    Manager() {
        cout << "\n Default constructor of Manager";
        dept = "Unknown";
    }

    Manager(int i, string n, double s, string d)
        : Employee(i, n, s) {
        cout << "\n Parameterized constructor of Manager";
        dept = d;
    }

    ~Manager() {
        cout << "\n Destructor of Manager";
    }

    void displayManager() {
        cout << "\n Department: " << dept;
    }
};

class Clerk : virtual public Employee {
protected:
    int typingspeed;

public:
    Clerk() {
        cout << "\nDefault constructor of Clerk";
        typingspeed = 0;
    }

    Clerk(int i, string n, double s, int t)
        : Employee(i, n, s) {
        cout << "\nParameterized constructor of Clerk";
        typingspeed = t;
    }

    ~Clerk() {
        cout << "\nDestructor of Clerk";
    }

    void displayClerk() {
        cout << "\nTyping Speed: " << typingspeed << " WPM";
    }
};

class SalesManager : public Manager, public Clerk {
    double sales;

public:
    SalesManager() {
        cout << "\n Default constructor of SalesManager";
        sales = 0;
    }

    SalesManager(int i, string n, double s, string d,
                 int t, double sa)
        : Employee(i, n, s),
          Manager(i, n, s, d),
          Clerk(i, n, s, t) {
        cout << "\nParameterized constructor of SalesManager";
        sales = sa;
    }

    ~SalesManager() {
        cout << "\nDestructor of SalesManager";
    }

    void display() {
        displayEmployee();
        displayManager();
        displayClerk();
        cout << "\nSales: " << sales;
    }
};

int main() {
    SalesManager obj(101, "Rahul", 50000, "Sales", 40, 200000);

    obj.display();

    return 0;
}


//Q-1. Write a student class and use it in your program.
//Store the data of 10 students and display the sorted data
//according to their roll numbers, dates of birth, and total marks.

#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    int day, month, year;
    int marks;

    void accept() {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter DOB (DD MM YYYY): ";
        cin >> day >> month >> year;

        cout << "Enter total marks: ";
        cin >> marks;

    }
    void display() {
        cout << roll << "\t"
             << day << "/" << month << "/" << year << "\t"
             << marks << endl;
    }
};

int main() {
    Student s[10];


        for (int i = 0; i < 10; i++) {
        cout << "\nStudent " << i + 1 << endl;
        s[i].accept();
        }

        cout << "\nRoll No\tDOB\t\tMarks\n";
        for (int i = 0; i < 10; i++) {
        s[i].display();
        }

        //sort by rollno

        for(int i=0;i<9;i++){
            for(int j=i+1;j<10;j++){
                if(s[i].roll>s[j].roll){
                    Student temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
        cout<<"\n Sorted by roll no.";
        for(int i=0;i<10;i++){
            s[i].display();
        }

        //sort by date of birth
        for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (s[i].year > s[j].year ||
               (s[i].year == s[j].year && s[i].month > s[j].month) ||
               (s[i].year == s[j].year && s[i].month == s[j].month &&
                s[i].day > s[j].day))
    {
             Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "\nSorted by Date of Birth:\n";
    for (int i = 0; i < 10; i++) {
        s[i].display();
    }

    //sort by total marks
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (s[i].marks < s[j].marks) {
              Student  temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "\nSorted by Total Marks:\n";
    for (int i = 0; i < 10; i++) {
        s[i].display();
    }

    return 0;
}

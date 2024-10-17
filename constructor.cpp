#include <bits/stdc++.h>
#include <string>
using namespace std;

class Teacher
{
private:
    float salary;

public:
    // 1. Non-parameterized constructor (commented out)
    // Teacher() {
    //     name = "Unknown";
    //     dept = "Unknown";
    //     subject = "Unknown";
    //     salary = 0.0;
    // }

    // 2. Parameterized constructor
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // 3. Copy constructor
    Teacher(const Teacher &oriObj)
    {
        cout << "I am a custom copy constructor... \n";
        name = oriObj.name;
        dept = oriObj.dept;
        subject = oriObj.subject;
        salary = oriObj.salary;
    }

    // Properties or attributes
    string name;
    string dept;
    string subject;

    // Setter function for salary
    void setSalary(double s)
    {
        salary = s;
    }

    // Getter function for salary
    double getSalary() const
    {
        return salary;
    }

    // Method to display teacher info
    void getInfo() const
    {
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    // Parameterized constructor
    Teacher t1("David John", "Computer Science", "C++", 50000.01);

    // Copy constructor
    Teacher t2(t1);
    t2.getInfo();

    // Set new salary using setter
    t2.setSalary(55000.50);
    cout << "Updated Salary: " << t2.getSalary() << endl;

    return 0;
}

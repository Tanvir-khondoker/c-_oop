#include <bits/stdc++.h>
#include <string>
using namespace std;

// here teacher is a blueprint or object
class Teacher
{
private:
    float salary;

public:
    // properties or attributes
    string name;
    string dept;

    // methods/member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }


    // setter func
    void setSalary(double s){
        salary = s;
    }


    // getter function
    double getSalary(){
        return salary;
    }
};

int main()
{

    Teacher t1;
    t1.name = "David John";
    t1.dept = "Computer Science";
    t1.subject = "c++";
    
    //    t1.changeDept

    cout << t1.dept << endl;

    return 0;
}
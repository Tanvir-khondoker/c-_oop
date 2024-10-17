#include <bits/stdc++.h>
#include <string>
using namespace std;

// here teacher is a blueprint or object
class Teacher{
    public:
    //properties or attributes
    string name;
    string dept;
    string subject;
    float salary;

    // methods/member function
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main()
{

   Teacher t1;
   t1.name = "David John";
   t1.dept = "Computer Science";
   t1.subject = "c++";
   t1.salary = 40000.42;
//    t1.changeDept

  cout<<t1.name<<endl;

    return 0;
}
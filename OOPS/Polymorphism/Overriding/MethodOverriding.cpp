#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
    virtual void work(){
        cout << Name << " attends meetings, sends emails, etc." << endl;
    }
};
class SoftwareDeveloper : public Employee {
public:
    string FavProLang;
    SoftwareDeveloper(string name, int age, string company, string favProLang)
            : Employee(name, age, company){
        FavProLang = favProLang;
    }
    void jobDescription(){
        cout << Name << " fixes bugs using " << FavProLang << endl;
    }
    void work() override {
        cout << Name << " develops apps, tests & deploys using "
        << FavProLang << endl;
    }
};
class Lecturer : public Employee {
public:
    string Subject;
    Lecturer(string name, int age, string company, string subject)
            : Employee(name, age, company)
    {
        Subject = subject;
    }
    void teach(){
        cout << Name << " teaches " << Subject << endl;
    }
    void work() override {
        cout << Name << " conducts seminars, gives lectures on "
             << Subject << endl;
    }
};
int main(){
    SoftwareDeveloper s1("Mark", 26, "TCS", "Java");
    Lecturer l1("Sanjay",35,"JIT", "ADA");
    s1.work();
    l1.work();
    Employee* e1 = &s1;
    Employee* e2 = &l1;
    e1->work();
    e2->work();
    return 0;
}
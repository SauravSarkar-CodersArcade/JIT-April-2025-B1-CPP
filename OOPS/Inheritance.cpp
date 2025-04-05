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
};
int main(){
    SoftwareDeveloper s1("Mark", 26, "TCS", "Java");
    s1.employeeDetails();
    s1.jobDescription();
    Lecturer l1("Sanjay",35,"JIT", "ADA");
    l1.employeeDetails();
    l1.teach();
    return 0;
}
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
int main() {
    Employee e1 =  Employee
            ("Sahana", 29, "Bizotic");
    Employee e2("Ramya", 34, "Bizotic");

    e1.employeeDetails();
    e2.employeeDetails();
    return 0;
}

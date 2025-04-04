#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    int Age;
    string Company;
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
int main() {
    Employee e1 =  Employee(); // Syntax 1
    Employee e2;
    e1.Name = "Sahana";
    e1.Age = 29;
    e1.Company = "Bizotic";
    e1.employeeDetails();
    e2.Name = "Ramya";
    e2.Age = 34;
    e2.Company = "Bizotic";
    e2.employeeDetails();
    return 0;
}

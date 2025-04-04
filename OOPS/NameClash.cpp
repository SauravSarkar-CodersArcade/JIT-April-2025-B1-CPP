#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    int Age;
    string Company;
    Employee(string Name, int Age, string Company){
        this->Name = Name;
        this->Age = Age;
        this->Company = Company;
    }
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
int main() {
    Employee employee("Khushi", 21, "Wipro");
    employee.employeeDetails();
    return 0;
}

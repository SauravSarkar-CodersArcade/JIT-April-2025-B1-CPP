#include <iostream>
using namespace std;
class Employee {
private:
    string Name;
    int Age;
    string Company;
public:
    // setters
    void setName(string name){
        Name = name;
    }
    void setAge(int age){
        Age = age;
    }
    void setCompany(string company){
        Company = company;
    }
    // Getters
    string getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }
    string getCompany(){
        return Company;
    }
};
int main() {
    Employee e1;
    // Use of setters
    e1.setName("Sahana");
    e1.setAge(29);
    e1.setCompany("Bizotic");
    // Use of getters
    cout << "Name: " << e1.getName() << endl;
    cout << "Age: " << e1.getAge() << endl;
    cout << "Company: " << e1.getCompany() << endl;
    return 0;
}

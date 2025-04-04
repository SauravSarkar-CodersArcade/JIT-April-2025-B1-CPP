#include <iostream>
using namespace std;
class JIT {
public:
    JIT(){
        cout << "Default Constructor..!!" << endl;
    }
    JIT(int value) : data(value){
        cout << "Parameterised Constructor..!!" << endl;
    }
    JIT(const JIT& other) : data(other.data){
        cout << "Copy Constructor..!!" << endl;
    }
    void display(){
        cout << "Data value is: " << data << endl;
    }
private:
    int data;
};
int main() {
    JIT obj1; // Default Constructor
    obj1.display();
    JIT obj2(20); // Parameterised Constructor
    obj2.display();
    JIT obj3 = obj2; // Copy Constructor Syntax 1
    obj3.display();
    JIT obj4(obj3); // Copy Constructor Syntax 2
    obj4.display();
    return 0;
}

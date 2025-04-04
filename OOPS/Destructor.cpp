#include <iostream>
using namespace std;
class Demo {
public:
    Demo(){
        cout << "Object has been created...!!" << endl;
    }
    ~Demo(){
        cout << "Object has been destroyed...!!" << endl;
    }
};
int main() {
    Demo obj = Demo();
    Demo obj1 = Demo();
    return 0;
}

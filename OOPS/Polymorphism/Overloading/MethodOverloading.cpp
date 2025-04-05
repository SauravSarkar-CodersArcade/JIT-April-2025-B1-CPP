#include <iostream>
using namespace std;
class Addition {
public:
    static void add(int a, int b){
        cout << a + b << endl;
    }
    static void add(int a, int b, int c){
        cout << a + b + c << endl;
    }
    static void add(float a, float b){
        cout << "Float Called" << endl;
        cout << a + b << endl;
    }
    static void add(double a, double b){
        cout << "Double Called" << endl;
        cout << a + b << endl;
    }
};
int main() {
    Addition::add(1,2);
    Addition::add(1,2,3);
    Addition::add(2.5f,4.5f); // Float Called
    Addition::add(2.56,4.58); // Double by default is called
    return 0;
}

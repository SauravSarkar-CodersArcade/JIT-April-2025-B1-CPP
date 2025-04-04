#include <iostream>
using namespace std;
namespace rahul {
    int x = 200;
    void add(int a, int b) {
        cout << a + b << endl;
    }
}
namespace hari {
    int x = 100;
    void add(int a, int b) {
        cout << a + b << endl;
    }
}
int main(){
//    bool status = true;
//    string str;
//    cout << "Enter any string:" << endl;
//    getline(cin, str);
//    cout << str;
    auto x = 2.5; // iterator
    cout << rahul::x << endl;
    cout << hari::x << endl;
    rahul::add(20,30);
    hari::add(10,20);
}

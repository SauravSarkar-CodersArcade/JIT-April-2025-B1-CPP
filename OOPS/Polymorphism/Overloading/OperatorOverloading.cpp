#include <iostream>
using namespace std;
class Counter{
private:
    int value;
public:
    Counter(int v) : value(v){}
    Counter operator++(){
        value++;
        return *this;
    }
    Counter operator--(){
        value--;
        return *this;
    }
    void display(){
        cout << "Value is: " << value << endl;
    }
};
int main() {
    Counter counter1(10);
    Counter counter2(20);
    // Increment & Decrement the objects using operator overloading:
    ++counter1;
    counter1.display();
    --counter2;
    counter2.display();
    return 0;
}

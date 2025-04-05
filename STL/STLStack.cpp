#include <bits/stdc++.h>
using namespace std;
void displayStackElements(stack<int> s){
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main() {
    // push, pop, size, empty, top
    stack<int> numbers;
    numbers.push(1);
    numbers.push(11);
    numbers.push(12);
    numbers.push(13);
    cout << "Top element: " << numbers.top() << endl;
    displayStackElements(numbers);
    cout << "Size of the stack: " << numbers.size() << endl;
    return 0;
}

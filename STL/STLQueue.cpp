#include <bits/stdc++.h>
using namespace std;
void displayQueueElements(queue<int> q){
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main() {
    // front, back, size, empty, push, pop
    queue<int> numbers;
    numbers.push(1);
    numbers.push(11);
    numbers.push(12);
    numbers.push(13);
    cout << "Front element: " << numbers.front() << endl;
    cout << "Back element: " << numbers.back() << endl;
    displayQueueElements(numbers);
    return 0;
}

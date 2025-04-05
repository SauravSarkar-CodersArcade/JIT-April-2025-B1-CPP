#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int> lst1; // default constructor
    list<int> lst2(3,10); // 10 10 10
    list<int> lst3(lst2); // Copy constructor
    lst1.push_back(10);
    lst1.push_front(20);
    lst1.insert(++lst1.begin(), 15);
    for (int data : lst1){
        cout << data << " ";
    }cout << endl;
    for (auto data : lst1){
        cout << data << " ";
    }cout << endl;
    // Forward & Backward Traversal
    for (list<int>::iterator it = lst1.begin(); it != lst1.end(); ++it){
        cout << *it << " ";
    }cout << endl;
    for (list<int>::reverse_iterator it = lst1.rbegin(); it != lst1.rend(); ++it){
        cout << *it << " ";
    }cout << endl;
    return 0;
}

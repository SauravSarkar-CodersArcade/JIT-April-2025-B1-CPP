#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_set<int> numbers;
    numbers.insert(1);
    numbers.insert(1);
    numbers.insert(11);
    numbers.insert(1);
    numbers.insert(21);
    numbers.insert(2);
    numbers.insert(5);
    numbers.insert(1);
    numbers.insert(41);
    numbers.insert(1);
    for (auto x : numbers){
        cout << x << " ";
    }cout << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    forward_list<int> forwardList = {10,20,30};
    forwardList.push_front(5);
    forwardList.push_front(0);
    for (auto x : forwardList){
        cout << x << " ";
    }cout << endl;
    auto it = forwardList.begin();
    while (next(it) != forwardList.end()){
        ++it;
    }
    forwardList.insert_after(it, 40);
    forwardList.insert_after(++it,50);
    for (auto x : forwardList){
        cout << x << " ";
    }cout << endl;
    return 0;
}

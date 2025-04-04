#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows and cols:" << endl;
    cin >> n;
    int ** twoD = new int * [n]; // This will only create n rows
    for (int i = 0; i < n; ++i) {
        twoD[i] = new int[n]; // We get each row of size n
        for (int j = 0; j < n; ++j) {
            cin >> twoD[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << twoD[i][j] << " ";
        }cout << endl;
    }
    delete[]twoD;
    return 0;
}

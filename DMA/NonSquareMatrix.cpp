#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout << "Enter the number of rows and cols:" << endl;
    cin >> n >> m;
    int ** twoD = new int * [n]; // This will only create n rows
    for (int i = 0; i < n; ++i) {
        twoD[i] = new int[m]; // We get each row of size m
        for (int j = 0; j < m; ++j) {
            cin >> twoD[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << twoD[i][j] << " ";
        }cout << endl;
    }
    delete[]twoD;
    return 0;
}

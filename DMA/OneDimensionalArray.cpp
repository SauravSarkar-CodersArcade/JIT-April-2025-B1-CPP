#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    // Initialisation
    int * array = new int[n]; // This is a 1D array of size n
    cout << "Enter the " << n << " array elements: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    cout << "The array elements are:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }cout << endl;
    delete[] array;
    return 0;
}

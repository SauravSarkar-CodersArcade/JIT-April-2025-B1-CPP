#include <iostream>
using namespace std;
void printMaxMin(int arr[], int n, int * max, int * min){
    for (int i = 0; i < n; ++i) {
        if (arr[i] > *max){
            *max = arr[i];
        }
        if (arr[i] < *min){
            *min = arr[i];
        }
    }
}
int main() {
    int arr[] = {4,-2,0,1,32,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    printMaxMin(arr, size, &max, &min);
    cout << "Max is: " << max << " Min is: " << min << endl;
    return 0;
}

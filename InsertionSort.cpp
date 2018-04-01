// insertion sort in increasing order
// CLRS p10

#include <iostream>
using namespace std;

void InsertionSort(int a[], int length);

void InsertionSort(int a[], int length) {
    for(int j = 1; j < length; j++) {
        int key = a[j];
        int i = j - 1;
        while (i >= 0 && a[i] > key) {
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
}

int main() {
    int a[8] = {2,5,9,11,3,5,8,1};
    InsertionSort(a,8);
    for (int i = 0; i < 8; i++)
        cout << a[i] << ',';
    cout << endl;
}

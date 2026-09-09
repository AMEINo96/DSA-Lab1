#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndex(int array[], int size, int key) {
    vector<int> indices;
    for (int i = 0; i < size; i++) {
        if (array[i] == key)
            indices.push_back(i);
    }
    return indices;
}

void printList(const vector<int> &a) {
    if (a.empty() == true) {
        cout << "array is empty or key not found" << endl;
        return;
    }
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = { 1, 2, 3, 4, 1, 1, 2, 2, 3, 4, 67, 67, 68, 699 };
    int size1 = 10;
    cout << "Testing multiple 1s: ";
    printList(findIndex(arr1, size1, 1));

    int arr2[] = { 1, 2, 3, 4, 1, 1, 2, 2, 3, 4 };
    int size2 = 10;
    cout << "Testing key 99 (not there): ";
    printList(findIndex(arr2, size2, 99));

    int arr3[1] = {};
    int size3 = 0;
    cout << "Testing empty array: ";
    printList(findIndex(arr3, size3, 5));

    return 0;
}

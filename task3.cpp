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

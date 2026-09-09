#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> findMode(int arr[], int size) {
    vector<int> modes;
    if (size <= 0 || arr == nullptr) return modes;

    map<int, int> freq;
    int maxCount = 0;

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > maxCount) {
            maxCount = freq[arr[i]];
        }
    }

    for (auto const &p : freq) {
        if (p.second == maxCount) {
            modes.push_back(p.first);
        }
    }
    return modes;
}

void printModes(const vector<int> &modes) {
    if (modes.empty()) {
        cout << "Empty array / No mode" << endl;
        return;
    }
    for (int m : modes) {
        cout << m << " ";
    }
    cout << endl;
}

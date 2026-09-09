#include "task6.h"
#include <map>

std::vector<int> findMode(const int arr[], int size) {
    std::vector<int> modes;
    if (arr == nullptr || size <= 0) {
        return modes;
    }

    std::map<int, int> frequency;
    int maxFreq = 0;

    for (int i = 0; i < size; ++i) {
        int count = ++frequency[arr[i]];
        if (count > maxFreq) {
            maxFreq = count;
        }
    }

    for (const auto& pair : frequency) {
        if (pair.second == maxFreq) {
            modes.push_back(pair.first);
        }
    }

    return modes;
}

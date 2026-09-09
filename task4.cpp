#include <iostream>
#include <string>
using namespace std;

int match(string &a, string &word) {
    if (word.length() == 0) return 0;
    for (int j = 0; j <= (int)a.length() - (int)word.length(); j++) {
        int i;
        for (i = 0; i < (int)word.length(); i++) {
            if (word[i] != a[i + j])
                break;
        }
        if (i == (int)word.length())
            return j;
    }
    return -1;
}

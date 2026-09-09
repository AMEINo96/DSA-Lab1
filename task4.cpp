#include <iostream>
#include <string>
#include <vector>
using namespace std;

int match(string &a, string &word) {
    if (word.length() == 0) return 0;
    for (int j = 0; j <= (int)a.length() - (int)word.length(); j++) {
        int i;
        for (i = 0; i < word.length(); i++) {
            if (word[i] != a[i + j])
                break;
        }
        if (i == word.length())
            return j;
    }
    return -1;
}

int main() {
    string text = "applepie";

    string p1 = "apple";
    cout << match(text, p1) << endl;

    string p2 = "pie";
    cout << match(text, p2) << endl;

    string p3 = "banana";
    cout << match(text, p3) << endl;

    string p4 = "";
    cout << match(text, p4) << endl;

    return 0;
}

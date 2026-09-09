#include <iostream>
#include <string>
#include <vector>
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

int main() {
    string text = "applepie";

    string p1 = "apple";
    cout << "Pattern 'apple': " << match(text, p1) << endl;

    string p2 = "pie";
    cout << "Pattern 'pie': " << match(text, p2) << endl;

    string p3 = "banana";
    cout << "Pattern 'banana': " << match(text, p3) << endl;

    string p4 = "";
    cout << "Empty pattern: " << match(text, p4) << endl;

    return 0;
}

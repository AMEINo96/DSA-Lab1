#include <iostream>
#include <string>
using namespace std;

// Forward declaration
int match(string &a, string &word);

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

#include <iostream>
#include <string>
#include "task4.h"

int main() {
    std::cout << "--- Test Task 4: String Pattern Matching (Naive) ---" << std::endl;
    std::string text = "applepie";

    // Test 1: Pattern at beginning
    std::cout << "Pattern 'apple' in '" << text << "': Index " << match(text, "apple") << " (Expected: 0)" << std::endl;

    // Test 2: Pattern at end
    std::cout << "Pattern 'pie' in '" << text << "': Index " << match(text, "pie") << " (Expected: 5)" << std::endl;

    // Test 3: Pattern not present
    std::cout << "Pattern 'banana' in '" << text << "': Index " << match(text, "banana") << " (Expected: -1)" << std::endl;

    // Test 4: Empty pattern
    std::cout << "Pattern '' (empty) in '" << text << "': Index " << match(text, "") << " (Expected: 0)" << std::endl;

    return 0;
}

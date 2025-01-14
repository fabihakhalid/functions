#include <iostream>
using namespace std;

char toUppercase(char ch) {
    return (ch >= 'a' && ch <= 'z') ? (ch - 32) : ch;
}

int main() {
    char ch = 'g';
    cout << "Uppercase: " << toUppercase(ch) << endl; // Result: Uppercase = G
    return 0;
}


#include <iostream>
using namespace std;

bool isUppercase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

int main() {
    char ch = 'G';
    cout << "Is Uppercase: " << isUppercase(ch) << endl; // Result: 1 (true)
    return 0;
}



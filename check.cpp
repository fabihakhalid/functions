#include <iostream>
using namespace std;

string checkNumber(int num) {
    if (num > 0) return "Positive";
    else if (num < 0) return "Negative";
    else return "Zero";
}

int main() {
    int num = -5;
    cout << "The number is: " << checkNumber(num) << endl; // Result: Negative
    return 0;
}



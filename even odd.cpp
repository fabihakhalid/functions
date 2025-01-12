#include <iostream>
using namespace std;

string checkEvenOdd(int num) {
    return (num % 2 == 0) ? "Even" : "Odd";
}

int main() {
    int num = 11;
cout << "Number is: " << checkEvenOdd(num) << endl; // Result: Odd
    return 0;
}



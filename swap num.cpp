#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    swapNumbers(num1, num2);
cout << "After Swap: " << num1 << " " << num2 << endl; // Result: 10 5
    return 0;
}



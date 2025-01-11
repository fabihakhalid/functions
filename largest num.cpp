#include <iostream>
using namespace std;

int findLargest(int a, int b, int c) {
    return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}

int main() {
    int num1 = 15, num2 = 25, num3 = 10;
    cout << "Largest: " << findLargest(num1, num2, num3) << endl; 
    return 0;
}



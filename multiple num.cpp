#include <iostream>
using namespace std;

void printTable(int num) {
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int num = 3;
    printTable(num); 
    // Result: Multiplication table of 3
    return 0;
}



#include <iostream>
using namespace std;

int rectangleArea(int length, int width) {
    return length * width;
}

int main() {
    int length = 10, width = 5;
    cout << "Area: " << rectangleArea(length, width) << endl; // Result: Area = 50
    return 0;
}


#include<iostream>
using namespace std;

void printNaturalNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    printNaturalNumbers(n); 
    return 0;
}



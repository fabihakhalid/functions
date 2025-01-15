#include <iostream>
#include <sstream>
using namespace std;

int countWords(string sentence) {
    stringstream ss(sentence);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

int main() {
    string sentence = "Hello world, this is C++.";
    cout << "Word count: " << countWords(sentence) << endl; // Result: 5
    return 0;
}

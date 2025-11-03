#include <bits/stdc++.h>
using namespace std;

int main() {

    int array[5];
    for (int i = 0; i <= 4; i++) {
        array[i] = i;
    }
    cout << '[';
    for (int i : array) {
        cout << i;
        if (i < 4) {cout << ", ";}
    }
    cout << ']' << endl;

    vector<int> vector_array;
    for (int i = 0; i <= 5; i++) {
        vector_array.push_back(i);
    }
    vector_array.pop_back();
    cout << '[';
    for (int i : vector_array) {
        cout << i;
        if (i < 4) {cout << ", ";}
    }
    cout << ']' << endl;

    return 0;
}
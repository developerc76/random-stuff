#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[2][2] = {{0, 1}, {2, 3}};
    cout << matrix << endl; // prints memory address

    vector<vector<int>> vector_matrix; 
    vector_matrix.push_back({});
    vector_matrix.push_back({});
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            vector_matrix[i].push_back(j);
        } 
    }

    // vector<vector<int>> vector_matrix = {{0, 1, 2, 3, 4}, {0, 1, 2, 3, 4}};

    for (auto i : vector_matrix) {
        for (auto j : i) {
            cout << j << ' '; 
        }
    }
    cout << endl; 

    return 0; 
}
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Queue {
    public: 
        vector<T> v;
        void push(T item) {v.push_back(item);}
        void pop() {v.erase(v.begin());}
        auto front() {if (!v.empty()) {return v[0];} else {return 0;}}
        auto back() {if (!v.empty()) {return v[v.size() - 1];} else {return 0;}}
        bool isEmpty() {return v.empty();}
        int size() {return v.size();}
};

int main() {
    Queue<int> myQueue;
    for (int i : {1, 2, 3, 4, 5}) {
        myQueue.push(i);
    }
    cout << myQueue.back() << endl;
    return 0;
}
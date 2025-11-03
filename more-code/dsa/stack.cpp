#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack {
    public: 
        vector<T> v;

        void push(T item) {v.push_back(item);}
        
        void pop() {if (!v.empty()) {v.pop_back();} else {cout << "Empty list" << '\n';}}

        auto peek() {if (!v.empty()) {return v[v.size() -1];} else {cout << "Empty list" << '\n';}; return 0;}

        bool isEmpty() {return v.empty();}
};

int main() {
    Stack<int> myStack;
    for (int i = 0; i < 5; i++) {
        myStack.push(i);
    }
    myStack.pop();
    cout << "Empty Stack: " << myStack.isEmpty() << endl;
    cout << "Last element: " << myStack.peek() << endl;


    return 0;
}
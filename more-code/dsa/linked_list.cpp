#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node {
    public: 
        T data;
        Node *next;
        Node() {
            data = 0;
            next = NULL;
        }
        Node (T data) {
            this->data = data;
            this->next = NULL;
        }
};

template <typename T>
class LL {
    Node<T> *head;
    public:
        LL() {
            head = NULL;
        }
        void insertAtHead(T data) {
            Node<T> *newNode = new Node<T>(data);
            if (head == NULL) {
                head = newNode;
                return;
            }
            newNode->next = this->head;
            this->head = newNode;
        }
        void print() {
            Node<T> *temp = head;
            if (head == NULL) {
                cout << "List empty" << '\n';
                return;
            }
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << '\n';
        }
        void insertAtEnd(T data) {
            Node<T> *newNode = new Node<T>(data);
            Node<T> *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        auto peek() {
            Node<T> *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            return temp->data;
        }
};

int main() {
    LL<string> list;
    list.insertAtHead("hello,");
    list.insertAtEnd("world!");
    cout << list.peek() << endl;
    return 0;
}
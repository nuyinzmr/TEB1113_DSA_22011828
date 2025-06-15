/*
Name : Nurin Najwa binti Zamri
ID : 22011828
Lab : 3
*/

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;
    Node* next_ptr; 

    Node(string name, Node* next_ptr = nullptr) {
        this->name = name;
        this->next_ptr = next_ptr;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void add_element(Node* newNode) {
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next_ptr = newNode;
            tail = newNode;
        }
    }

    void display_list() {
        Node* currNode = head;
        while (currNode != nullptr) {
            cout << currNode->name << endl;
            currNode = currNode->next_ptr;
        }
    }

    void delete_by_value(string val) {
        Node* curr = head;
        Node* prev = nullptr;

        while (curr != nullptr && curr->name != val) {
            prev = curr;
            curr = curr->next_ptr;
        }

        if (curr == nullptr) {
            return;
        }

        if (prev == nullptr) {
            head = curr->next_ptr;
        } else {
            prev->next_ptr = curr->next_ptr;
        }

        if (curr == tail) {
            tail = prev;
        }
        delete curr;
    }
};

int main() {
    Node* node1 = new Node("Ali");
    Node* node2 = new Node("Ahmed");
    Node* node3 = new Node("Alicia");

    LinkedList list;
    list.add_element(node1);
    list.add_element(node2);
    list.add_element(node3);

    list.display_list();
    list.delete_by_value("Ahmed");
    list.display_list();


    return 0;
}

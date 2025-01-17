#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void push_front(int value, Node* &head){
    Node* temp = new Node();
    temp->data = value;
    temp->next = head;
    head = temp;
}

int main(){
    Node* head = nullptr;
    int num = 2147483647;

    while(num != 0){
        push_front(num, head);
        num = num / 5;
    }
    
    Node* current = head;
    int pos = 1;
    cout << "Keep dividing the max integer value by 2" << endl;
    while(current != nullptr){
        cout << pos << " = " << current->data << endl;
        pos++;
        current = current->next;
    }
    return 0;
}

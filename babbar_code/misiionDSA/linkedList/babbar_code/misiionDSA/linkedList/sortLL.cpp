#include<iostream>
using namespace std;

// Sirf ek hi class - Node class
class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Function to add node at end
Node* addNode(Node* head, int value) {
    Node* newNode = new Node(value);
    
    if (head == NULL) {
        return newNode;
    }
    
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    
    return head;
}

// Function to print list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

// Function to find middle
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head->next;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}

// Function to merge two sorted lists
Node* merge(Node* left, Node* right) {
    Node* dummy = new Node(0);
    Node* tail = dummy;
    
    while (left != NULL && right != NULL) {
        if (left->data <= right->data) {
            tail->next = left;
            left = left->next;
        } else {
            tail->next = right;
            right = right->next;
        }
        tail = tail->next;
    }
    
    if (left != NULL) {
        tail->next = left;
    }
    if (right != NULL) {
        tail->next = right;
    }
    
    return dummy->next;
}

// Main function to sort list
Node* sortList(Node* head) {
    // Agar empty ya single node hai
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    // Step 1: Middle find karo
    Node* middle = findMiddle(head);
    
    // Step 2: List ko 2 parts mein split karo
    Node* rightHalf = middle->next;
    middle->next = NULL;
    Node* leftHalf = head;
    
    // Step 3: Dono parts ko sort karo
    leftHalf = sortList(leftHalf);
    rightHalf = sortList(rightHalf);
    
    // Step 4: Sorted parts ko merge karo
    return merge(leftHalf, rightHalf);
}

// Main function - Program yaha se start hota hai
int main() {
    
    // Example 1
    cout << "Example 1:" << endl;
    Node* list1 = NULL;
    list1 = addNode(list1, 4);
    list1 = addNode(list1, 2);
    list1 = addNode(list1, 1);
    list1 = addNode(list1, 3);
    
    cout << "Before sorting: ";
    printList(list1);
    
    list1 = sortList(list1);
    
    cout << "After sorting:  ";
    printList(list1);
    cout << endl;
    
    // Example 2
    cout << "Example 2:" << endl;
    Node* list2 = NULL;
    list2 = addNode(list2, -1);
    list2 = addNode(list2, 5);
    list2 = addNode(list2, 3);
    list2 = addNode(list2, 4);
    list2 = addNode(list2, 0);
    
    cout << "Before sorting: ";
    printList(list2);
    
    list2 = sortList(list2);
    
    cout << "After sorting:  ";
    printList(list2);
    cout << endl;
    
    // Example 3
    cout << "Example 3:" << endl;
    Node* list3 = NULL;
    list3 = addNode(list3, 10);
    list3 = addNode(list3, 5);
    list3 = addNode(list3, 20);
    list3 = addNode(list3, 15);
    
    cout << "Before sorting: ";
    printList(list3);
    
    list3 = sortList(list3);
    
    cout << "After sorting:  ";
    printList(list3);
    
    return 0;
}
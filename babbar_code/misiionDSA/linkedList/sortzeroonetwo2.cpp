#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

node* sort2(node* &head){
    // dummy heads and tails for 0,1,2 lists
    node* zerohead = new node(-1);
    node* zerotail = zerohead;

    node* onehead = new node(-1);
    node* onetail = onehead;   // <-- FIX

    node* twohead = new node(-1);
    node* twotail = twohead;   // <-- FIX

    // split original list into three lists
    node* curr = head;
    while(curr != NULL){
        node* temp = curr;
        curr = curr->next;
        temp->next = NULL;
        if(temp->data == 0){
            zerotail->next = temp;
            zerotail = temp;
        } else if(temp->data == 1){
            onetail->next = temp;
            onetail = temp;
        } else { // assume only 0,1,2
            twotail->next = temp;
            twotail = temp;
        }
    }

    // real first nodes (skip dummies)
    node* firstZero = zerohead->next;
    node* firstOne  = onehead->next;
    node* firstTwo  = twohead->next;

    node* newHead = NULL;

    // connect zero -> one -> two appropriately
    if(firstZero){
        newHead = firstZero;
        if(firstOne){
            zerotail->next = firstOne;
            if(firstTwo){
                onetail->next = firstTwo;
            }
        } else {
            // no ones
            if(firstTwo){
                zerotail->next = firstTwo; // <-- FIX (link, don't reassign)
            }
        }
    } else if(firstOne){
        newHead = firstOne;
        if(firstTwo){
            onetail->next = firstTwo;
        }
    } else {
        newHead = firstTwo;
    }

    // delete dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return newHead;
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    node* head = new node(1);
    node* second = new node(0);
    node* third = new node(0);
    node* fourth = new node(0);
    node* fifth = new node(1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << "Normal LL\n";
    print(head);

    head = sort2(head); // <-- IMPORTANT: assign the returned head

    cout << "Sorted LL\n";
    print(head);
    return 0;
}

#include<iostream>
using namespace std;
class node{
    public:
      int data;
      node* next;
      node(int data){
        this->data=data;
        this->next=NULL;
      }
};
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* reverse(node* head){
    node* prev=NULL;
    node* curr=head;
    node* next=curr->next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool checkPalindrome(node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return true;
    }
    if(head->next==NULL){
        //only one node
        return true;
    }
    //>1 nodes in LL
     // step A: find the middle node
     node* slow=head;
     node* fast=head->next;
     while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
     }
     // slow pointer is pointing to the middle node
     // step B: reverse LL after middle node
     node* reversekahead=reverse(slow->next);// mide ka agla(slow->next)
     //join the reverse LL into left parth
     slow->next=reversekahead;
     // step c: start comparision
     node* temp1 =head;
     node* temp2=reversekahead;
     while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            //not a palidrome
            return false;
        }
        else{
            //if data is equal , then aage badh jao
            temp1=temp1->next;
            temp2=temp2->next;
        }
     }
     return true;
}
int main(){
     node* head=new node(10);
     node* second=new node(20);
     node* third=new node(30);
    node* fourth=new node(20);
    node* fifth=new node(10);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    cout<<"Normal LL"<<endl;
    print(head);
    cout<<endl;
    cout<<checkPalindrome(head);
    cout<<endl;
    print(head);
    return 0;

}
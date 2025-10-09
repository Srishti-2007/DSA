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
void removeduplicates(node* head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    if(head->next==NULL){
        cout<<"single node in LL"<<endl;
        return;
    }
    //>1 nodes in ll
    node* curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL)&&(curr->data==curr->next->data)){
            //equal
            node* temp=curr->next;
            curr->next=curr->next->next;
            //delete temp
            temp->next=NULL;
            delete temp;
        }
        else{
            // not equal
            curr=curr->next;
        }
    }
}
int main(){
     node* head=new node(10);
     node* second=new node(20);
     node* third=new node(30);
    node* fourth=new node(30);
    node* fifth=new node(90);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    cout<<"Normal LL"<<endl;
    print(head);
    cout<<endl;
    removeduplicates(head);
    cout<<endl;
    print(head);
    return 0;

}
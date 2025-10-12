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
node* sortall(node* &head){
    //create dummy nodes
    node* zeroHead=new node(-1);
    node* zerotail=zeroHead;

    node* onewHead=new node(-1);
    node* onetail=zeroHead;

    node* twoHead=new node(-1);
    node* twotail=zeroHead;
}
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
     node* head=new node(1);
     node* second=new node(0);
     node* third=new node(0);
    node* fourth=new node(0);
    node* fifth=new node(1);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    cout<<"Normal LL"<<endl;
    print(head);
    cout<<endl;
    cout<<endl;
    print(head);
    return 0;

}
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

    node(){
        this->data=0;
        this->next=NULL;
    }
};
node* reverse(node* &prev , node* &curr){
    //bse case
    if(curr==NULL){
        return prev;
    }
    // 1 case solve then recursion will take care
    node* forward =curr->next;
    curr->next=prev;
    reverse(curr,forward);
}
int convert(node* head){
    int contains=0;
    int total=0;
    int var=1;
    node* temp=head;
    while(temp!=NULL){
      contains=var*temp->data;
      total=contains+total;
      var=var*2;
      temp=temp->next;
    }
    return total;
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
     node* second=new node(1);
     node* third=new node(1);
     node* fourth=new node(0);

    head->next=second;
    second->next=third;
    third->next=fourth;

     node* prev =NULL;
      node* curr =head;
      head=reverse(prev,curr);
      cout<<convert(head);

}
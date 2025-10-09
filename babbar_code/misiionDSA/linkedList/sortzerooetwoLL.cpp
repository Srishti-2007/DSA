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
void sort_zero_one_two(node* &head){
    int zero=0;
    int one=0;
    int two=0;
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==0)
        zero++;
        else if(temp->data==1)
        one++;
        else if(temp->data==2)
        two++;
        temp=temp->next;
    }
    // step 2 : fill 0,1 and 2s in the original LL
    temp=head;
    while(temp!=NULL){
        //fill zeroes
        while(zero--){
            temp->data=0;
            temp=temp->next;
        }
        //fill ones
        while(one--){
            temp->data=1;
            temp=temp->next;
        }
        //fill twos
        while(two--){
            temp->data=2;
            temp=temp->next;
        }
    }
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
    sort_zero_one_two(head);
    cout<<endl;
    print(head);
    return 0;

}
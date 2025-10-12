// #include<iostream>
// using namespace std;
// class node{
//     public:
//       int data;
//       node* next;
//       node(int data){
//         this->data=data;
//         this->next=NULL;
//       }
// };
// node* reverse(node* head){
//     node* prev=NULL;
//     node* curr=head;
//     node* next=curr->next;
//     while(curr!=NULL){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     return prev;
// }
// node* solve(node* &head1,node* &head2){
//     //step 1: reverse both linked list
//      head1=reverse(head1);
//      head2= reverse(head2);
//     //step 2: add both linked list
//     node* anshead=NULL;
//     node* anstail=NULL;
//     int carry=0;
//     while(head1 !=NULL && head2!=NULL){
//         //calculate sum
//         int sum=carry+head1->data + head2->data;
//         // find digit to create node for
//         int digit = sum%10;
//         //calculate carry
//         carry=sum/10;
//         //create a new node for the digit
//         node* newnode=new node(digit);
//         //attach the newnode into the answer wali ll
//         if(anshead==NULL){
//             //first node insert krre ho
//             anshead=newnode;
//             anstail=newnode;
//         }
//         else{
//         anstail->next=newnode;
//         anstail=newnode;
//         }
//         //head1>head2
//         while(head1!=NULL){
//             int sum=carry+head1->data;
//             int digit=sum%10;
//             carry=sum/10;
//             node* newnode=new node(digit);
//             anstail->next=newnode;
//             anstail=newnode;
//             head1=head1->next;
//         }
//         //head2>head1
//         while(head2!=NULL){
//             int sum=carry+head1->data;
//             int digit=sum%10;
//             carry=sum/10;
//             node* newnode=new node(digit);
//             anstail->next=newnode;
//             anstail=newnode;
//             head2=head2->next;
//         }
//     }
//     //handle carry ko alag se
//     while(carry!=0){
//             int sum=carry;
//             int digit=sum%10;
//             carry=sum/10;
//             node* newnode=new node(digit);
//             anstail->next=newnode;
//             anstail=newnode;
//         }
//     //step3 : reverse the ans linked list
//     head=reverse()
// }
// void print(node* &head)
// {
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//      node* head=new node(10);
//      node* second=new node(20);
//      node* third=new node(30);
//     node* fourth=new node(30);
//     node* fifth=new node(90);
//     head->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     cout<<"Normal LL"<<endl;
//     print(head);
//     cout<<endl;
//     cout<<endl;
//     print(head);
//     return 0;

// }
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
// class list{
//     Node* head;
//     Node*tail;

//     list(int d){
//         data=d;
//         head->NULL;
//         tail->NULL;
//     }
// };

void printLL(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head -> next;
    }
}



void insertLL(Node*head,int pos,int d){
    Node* AddNode =NULL;
    AddNode->data = d;
    if(pos==0){
        AddNode->next= head->next;
        AddNode= head;
    }
}

int main() {
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    
    head= new Node();
    second=new Node();
    third=new Node();
//...
    head->data=10;
    head->next=second;
    
    second->data=50;
    second->next=third;

    third->data= -100;
    third->next=NULL;

    Node*toAdd = NULL;
    toAdd= new Node();

    // toAdd->data = 69;
    // toAdd->next=third;
    // second->next=toAdd ;

    printLL(head);
}

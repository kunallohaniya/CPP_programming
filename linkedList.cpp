#include<iostream>
using namespace std;
#include"node.cpp"

void print (Node *head){
 Node *temp = head;

    while(temp != NULL){
    cout <<temp ->data <<" ";
    temp = temp ->next;    
    }

    temp = head;
    while(temp != NULL){
    cout <<temp ->data <<" ";
    temp = temp ->next;    
    }
}
int main(){
    //statically
   /*Node n1(1);
    Node *head = &n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;*/

    // dynamically
    Node *n1 = new Node(1);
    Node *head = n1;

    Node *n2 = new Node(2);
    n1 -> next = n2;
    
    Node *n3 = new Node(3);
    n2 -> next = n3;

    Node *n4 = new Node(4);
    n3 -> next = n4;

    Node *n5 = new Node(5);
    n4 -> next = n5;
   // print(head);

    print(head);
}

      //      TAKE INPUT - 2 //
/*Node* takeInput_better(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
    }
        cin >>data;
    }
    return head;
}     

void print(Node *head){
    while(head != NULL){
        cout <<head -> data << " ";
        head = head -> next;
    }
}

int main(){
    Node *head = takeInput_better();
    print(head);
};*/

    //    INSERTION      //
/*Node* insertNode(Node *head,int i,int data) {
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;

    if(i == 0) {
        newNode -> next = head;
        head = newNode;
        return head;
    }
    while(temp != NULL && count < i - 1) {
        temp = temp -> next;
        count++;
    }
    if(temp != NULL) {
        Node *a = temp -> next;
        temp -> next = newNode;
        newNode -> next = a;
    }
    return head;
}

void print(Node *head) {
    while(head != NULL) {
        cout << head -> data <<" ";
        head = head -> next;
    }
}
int main() {
}*/
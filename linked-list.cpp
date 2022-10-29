#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data= data;
            this->next= NULL;
        }
};


Node* reverseLLUsingStack(Node* head){
    stack<Node*> s;
    Node* tempx= head;
    while(tempx!=NULL){
        s.push(tempx);
        tempx=tempx->next;
    }
    Node* topNode= s.top();
    Node* temp= s.top();
    s.pop();
    while(!s.empty()){
        topNode->next = s.top();
        topNode= s.top();
        s.pop();
    }
    topNode->next=NULL;
    return temp;
}

void buildLL(Node* &head, int val){  
    
    Node* newNode= new Node(val);
    if(head==NULL){
        head= newNode;
    }
    else{
        Node* temp1= head;

        // while(temp->next!=NULL){
        //     temp=temp->next;
        // }
        temp1->next= newNode;
        temp1= temp1->next;

    }
}

void printLL(Node* head){
    if(head==NULL){
        cout<<" ";
    }
    else{
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
        }
    }

}

int main(){
    Node* head= NULL;
    buildLL(head, 1);
    buildLL(head, 2);
    buildLL(head, 3);
    buildLL(head, 4);


    //buildBinary(head);
    printLL(head);
    head= reverseLLUsingStack(head);
    cout<<endl;
    printLL(head);
    return 0;
}

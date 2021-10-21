#include<bits/stdc++.h>
using namespace std;

template<typename T>
class node
{
    public:
    node(T d)
    {
      data=d;  
    }
    T data;
    node<T>*next;
};
template<typename T>
class Stack
{
    node<T> *n;
    node<T> *head;
    public:
    
    Stack()
    {
        head=NULL;
    }
    void push(T d)
    {
        n=new node<T>(d);
        n->next=head;
        head=n;
        
    }
    T top()
    {
        return head->data;
    }
    bool empty()
    {
        if(head==NULL)
        return true;
        else
        return false;
    }
    void pop()
    {
        if(head!=NULL)
        {
        node<T>*temp=head;
        head=head->next;
        delete(temp);
        }
    }
};

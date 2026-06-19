#include <iostream>
using namespace std;
// creating node
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
         Node* newNode = new Node(val);
         if(head == NULL){
             head = tail = newNode;
         }else{
            tail->next = newNode;
            tail = newNode;
         }
    }

    void print_ll(){
        Node* temp = head;
       while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
       }
       cout<<endl;
    }
};

int main()
{

    List l1;

    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(30);
    l1.push_front(40);

    l1.push_back(1);
    
    l1.print_ll();
    return 0;
}
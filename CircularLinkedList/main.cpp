#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
class CLinkedList{
public:
    Node *head;
    CLinkedList(){
        head=nullptr;
    }
    void insert(int value){
        Node *NewNode=new Node(value);
        if(!head){
            head=NewNode;
            NewNode->next=head;
        }
        else{
            Node *temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=NewNode;
            NewNode->next=head;
        }
    }
    void display(){
        Node *temp=head;
        do{
            cout<<temp->data<<"->";
            temp=temp->next;
        }while(temp!=head);
        cout<<"head: "<<head->data<<endl;
    }
};
int main()
{
    CLinkedList myList;
    int op;
    while(op!=3){
        cout << "1.INSERT \n2.Display\n3.Exit\nChoose Option: ";
        cin>>op;
        switch(op){
            case 1:
                cout<<endl;
                int num;
                cout<<"Enter number to insert: ";
                cin>>num;
                myList.insert(num);
                break;
            case 2:
                cout<<endl;
                cout<<"Circular LinkedList: ";
                myList.display();
                break;
            case 3: cout<<"Exiting"<<endl;
                break;
            default:cout<<"Invalid input"<<endl;
                break;
        }
    }
    return 0;
}

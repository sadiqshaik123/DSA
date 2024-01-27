#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
class ClinkedList{
public:
    Node *head;
    ClinkedList(){
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
            if(temp->next!=head){
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
    void deleteNode(int value){
        Node *temp=head;
        while(temp->next->data!=value){
            temp=temp->next;
        }
        Node *todelete=temp->next;
        temp->next=temp->next->next;
       
        delete todelete;

    }
};
int main()
{
    ClinkedList myList;
    int op;
    while(op!=4){
        cout << "1.INSERT \n2.Display\n3.Delete\n4.Exit\nChoose Option: ";
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
            case 3:
                int n;
                cout<<"Enter Element to delete: ";
                cin>>n;
                myList.deleteNode(n);
                break;
            case 4:
                cout<<"exiting"<<endl;
                break;
            default:cout<<"Invalid input"<<endl;
                break;
        }
    }
    return 0;
}

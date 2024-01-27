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
class LinkedList{
public:
    Node *head;
    LinkedList(){
        head=nullptr;
    }
    
    void insert(int value){
        Node *NewNode=new Node(value);
        if(!head){
            head=NewNode;
        }
        else{
            Node *temp=head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=NewNode;
        }
    }
    void display(){
        Node *temp=head;
        while(temp){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }
    void deleteNode(int value){
        Node* temp=head;
        while(temp->next->data!=value){
            temp=temp->next;
        }
        Node *deleteele=temp->next;
        temp->next=temp->next->next;
        delete deleteele;
        cout<<"element deleted"<<endl;
    }
    
};
int main()
{
    LinkedList myList;
    int op;
    while(op!=4){
        cout << "1.INSERT \n2.Display\n3.Delete\n4.Exit\nEnter Option: ";
        cin>>op;
        switch(op){
            case 1:
                int num;
                cout<<"Enter number to insert: ";
                cin>>num;
                myList.insert(num);
                break;
            case 2: myList.display();
                break;
            case 3:
                int ele;
                cout<<"Enter element to delete: ";
                cin>>ele;
                myList.deleteNode(ele);
                break;
            case 4: cout<<"Exting"<<endl;
                break;
            default:cout<<"Invalid input"<<endl;
                break;

        }

    }
    return 0;
}

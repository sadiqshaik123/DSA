#include <iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data=value;
        next=nullptr;
        prev=nullptr;
    }
};
class LinkedList{
public:
    Node *head;
    LinkedList(){
        head=nullptr;
    }
    void insert(int value){
        Node *NewNode= new Node(value);
        if(!head){
            head=NewNode;
        }
        else{
            Node *temp=head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=NewNode;
            NewNode->prev=temp;
        }
    }
    void display(){
        Node *temp=head;
        while(temp){
            cout<<temp->data<<"<->";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }
};

int main()
{
    LinkedList myList;
    int op;
    while(op!=3){
        cout << "1.INSERT \n2.Display\n3.Exit\nChoose Option: ";
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
            case 3: cout<<"Exting"<<endl;
                break;
            default:cout<<"Invalid input"<<endl;
                break;

        }

    }


    return 0;
}

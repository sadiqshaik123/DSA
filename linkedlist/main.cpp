#include <iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int value):data(value),next(nullptr){}

};
class LinkedList{
public:
    Node*head;
    LinkedList():head(nullptr){}
    void insert(int value){
        Node *newNode=new Node(value);
        if(!head){
            head=newNode;
        }
        else{
            Node*temp=head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next =newNode;
        }

    }
    void display(){
        Node*temp=head;
        while(temp){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }

    void deleteNode(int value){
        Node *temp=head;
        if(temp && temp->data == value){
            head=temp->next;
            delete temp;
            cout << "Element " << value << " deleted successfully." << endl;
            return;
        }
        while(temp && temp->data&& temp->next->data != value){
            temp=temp->next;
        }
        if (temp && temp->next) {
            Node *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
            cout << "Element " << value << " deleted successfully." << endl;
        }
        else{
            cout<<"element not found"<<endl;
        }
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
            case 4: cout<<"Exting"<<endl;
                break;
            default:cout<<"Invalid input"<<endl;
                break;

        }

    }


    return 0;
}

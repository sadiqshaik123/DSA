#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int>myStack;
    int op;
    while(op!=3){
            cout<<"1.insert element\n2.display\n3.Exit\nChoose: ";
            cin>>op;
            switch(op){
            case 1:
                int num;
                cout<<"enter element to insert: ";
                cin>>num;
                myStack.push(num);
                break;
            case 2:
                while(!myStack.empty()){
                    cout<<myStack.top()<<" ";
                    myStack.pop();
                }
                cout<<endl;
                break;
            case 3:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid Input"<<endl;
                break;
            }

    }
    return 0;
}

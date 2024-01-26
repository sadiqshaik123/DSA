#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int>Myqueue;
    int op;
    while(op!=3){
        cout<<"1.Insert\n2.Display\n3.Exit\nChoose Option: ";
        cin>>op;
        switch(op){
            case 1:
                int num;
                cout<<"Enter number: ";
                cin>>num;
                Myqueue.push(num);
                break;
            case 2:
                while(!Myqueue.empty()){
                    cout<<Myqueue.front()<<" ";
                    Myqueue.pop();
                }
                cout<<endl;
                break;
            case 3:
                cout<<"Exiting...."<<endl;
                break;
            default:
                cout<<"Invalid"<<endl;
                break;
        }
    }
}

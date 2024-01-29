#include<iostream>
using namespace std;

struct BstNode {
	int data;
	BstNode* left;
	BstNode* right;
};

BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) {
		root = GetNewNode(data);
	}

	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}

	else {
		root->right = Insert(root->right,data);
	}
	return root;
}

bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() {
	BstNode* root = NULL;
	int op;
	while(op!=3){
        cout<<"1.Insert\n2.Search\n3.exit\nEnter Option:";
        cin>>op;
        switch(op){
        case 1:
            int num;
            cout<<"Enter Number to insert: ";
            cin>>num;
            root =Insert(root,num);
            break;
        case 2:
            int number;
            cout<<"Enter number be searched: ";
            cin>>number;
            if(Search(root,number) == true) cout<<"Found\n";
            else cout<<"Not Found\n";
            break;
        case 3:
            cout<<"Exiting..."<<endl;
            break;
        default:
            cout<<"Invalid Input"<<endl;
            break;
        }
	}


}

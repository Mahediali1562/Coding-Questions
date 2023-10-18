#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
	node(int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};

node* searchInBST(node* root,int key){
	if(root == NULL){
		return NULL;
	}
	if(root->data == key){
		return root;
	}
	if(root->data > key){
		return searchInBST(root->left,key);
	}
	return searchInBST(root->right,key);
}


int main(){
	node* root = new node(4);
	root->left = new node(2);
	root->right = new node(5);
	root->left->left = new node(1);
	root->left->right = new node(3);
	root->right->right = new node(6);
	if(searchInBST(root,9) == NULL){
		cout<<"Key doesNot exists"<<endl;
	}
	else{
		cout<<"Key exists"<<endl;
	}
	
}


/*
          4
         / \
        2   5
       / \   \
      1   3   6
*/ 

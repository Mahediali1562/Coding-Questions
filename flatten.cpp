#include "bits/stdc++.h"
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

/*
          1
        /   \
       2     3
      / \   / \
     4   5 6   7
*/ 
void flatten(node* root){
	if(root == NULL || root->left == NULL && root->right == NULL){
		return;
	}
	if(root->left != NULL){
		flatten(root->left);
		node* temp = root->right;
		root->right = root->left;
		root->left = NULL;

		node* t = root->right;
		while(t->right != NULL){
			t=t->right;
		}
		t->right = temp;
	}
}

void inorder(struct node* root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}


int main()
{
	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	inorder(root);
	flatten(root);
	cout<<endl;
	inorder(root);
}

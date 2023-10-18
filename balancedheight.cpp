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

int height(node* root){
	if(root == NULL){
		return 0;
	}
	int lheight = height(root->left);
	int rheight = height(root->right);
	return max(lheight,rheight)+1;
}


bool isBalanced(node* root){
	if(root == NULL){
		return true;
	}
	if(isBalanced(root->left) == false){
		return false;
	}
	if(isBalanced(root->right) == false){
		return false;
	}
	int lh = height(root->left);
	int rh = height(root->right);
	if(abs(lh-rh)<=1){
		return true;
	}
	else{
		return false;
	}
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
	cout<<isBalanced(root);
}


/*
          1
        /   \
       2     3
      / \   / \
     4   5 6   7
*/ 
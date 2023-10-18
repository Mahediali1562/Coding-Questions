#include <bits/stdc++.h>
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

void inorder(struct node* root){
	if(root == NULL){
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}


node* insertBst(node* root,int val){
	if(root == NULL){
		return new node(val);
	}
	if(val<root->data){
		root->left = insertBst(root->left,val);
	}
	else{
		root->right = insertBst(root->right,val);
	}
	return root;
}


int main(){
	node *root = NULL;
	root = insertBst(root,5);
	insertBst(root,1);
	insertBst(root,3);
	insertBst(root,4);
	insertBst(root,2);
	insertBst(root,7);

	inorder(root);
	cout<<endl;

}
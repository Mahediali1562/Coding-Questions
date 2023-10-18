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

bool isBST(node* root, node* min = NULL, node* max = NULL){
	if(root == NULL){
		return true;
	}
	if(min != NULL && min->data>=root->data){
		return false;
	}
	if(max != NULL && max->data<=root->data){
		return false;
	}
	bool leftValid = isBST(root->left,min,root);
	bool rightValid = isBST(root->right,root,max);

	return leftValid and rightValid;
}




int main(){
	node* root = new node(5);
	root->left = new node(1);
	root->right = new node(8);
	if(isBST(root,NULL,NULL)){
		cout<<"BST is valid";
	}
	else{
		cout<<"Invalid BST";
	}
	
	

}
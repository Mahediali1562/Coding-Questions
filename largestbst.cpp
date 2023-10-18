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

struct info
{
	int size;
	int max;
	int min;
	int ans;
	bool isBST;
}

info largestBSTinBT(node* root){
	if(root == NULL){
		return {0,INT_MIN,INT_MAX,0,true};
	}
	if(root->left == NULL && root->right == NULL){
		return {1,root->data,root->data,1,true};

	}
}
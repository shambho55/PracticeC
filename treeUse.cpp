#include <iostream>
#include "treeNode.h"

using namespace std;

void printTree(TreeNode<int> *root){
	if(root == NULL) return;
	cout << root->data << ":";
	for(int i = 0;i < root->children.size();i++){
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for(int i = 0;i < root->children.size();i++){
		printTree(root->children[i]);
	}
}

TreeNode<int>* takeInput(){
	cout << "Enter data" << endl;
	int rootData;
	//if(rootData == NULL) return;
	cin >> rootData;
	TreeNode<int> *root = new TreeNode<int> (rootData);

	cout << "Enter num of child of " << rootData << endl;
	int num;
	cin >> num;
	for(int i = 0;i < num;i++){
	TreeNode<int> *child = takeInput();
	root->children.push_back(child);
	}
	return root;
}
int main(){
	/*
	TreeNode<int> *root = new TreeNode<int> (1);
	TreeNode<int> *node1 = new TreeNode<int> (2);
	TreeNode<int> *node2 = new TreeNode<int> (3);
	root->children.push_back(node1);
	root->children.push_back(node2);
	*/
	TreeNode<int> *root = takeInput();
	printTree(root);
	//TODO delete the tree
}
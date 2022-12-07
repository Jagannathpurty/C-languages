#include<stdio.h>
#include<stdlib.h>
struct node{
	int key;
	struct node *left;
	struct node *right;
};
	struct node	*getNewNode(int);
	struct node *insert(struct node*,int);
	struct node *newNode;
struct node *getNewNode(int val){
struct node	*newNode=(struct node*)malloc(sizeof(struct node));
	newNode->key=val;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
struct node *insert(struct node *root,int val){
	if(root==NULL)
		return getNewNode(val);
		
		
		if(root->key<val)
		root->right=insert(root->right,val);
		
		
		else if(root->key>val)
		root->left=insert(root->left,val);
		return root;
}
void inorder(struct node *root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	printf("%d ",root->key);
	inorder(root->right);
}

int main(){
     struct node *root=NULL;
     root=insert(root,100);		

     root=insert(root,178);
     root=insert(root,176);
	inorder(root);
	
	
	return 0;
}

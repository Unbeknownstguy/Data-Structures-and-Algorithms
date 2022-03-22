#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *next;
};


void insertAtEnd(Node** root, int x){
	Node *temp = new Node;
	temp->data = x;
	temp->next = NULL;
	
	if(*root == NULL){
		*root = temp;
	}
	
	else{
		Node* ptr;
		ptr = *root;
		while(ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
}


Node* insert(int arr[], int n){
	Node* root = NULL;
	for(int i=0; i<n; i++)
		insertAtEnd(&root, arr[i]);
		
	return root;
}


void PrintNthFromEnd(Node* root, int n){
	
	if(root==NULL) return;
	
	Node* first = root;
	for(int i=0; i<n; i++){
		if(first == NULL) return;
		first = first->next;
	}
	
	Node* second = root;
	while(first != NULL){
		second = second->next;
		first = first->next;
	}
	
	cout<<second->data;
	
}

void display(Node* root){
	while(root!=NULL){
		cout<<root->data<<" ";
		root = root->next;
	}
	cout<<"\n";
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++) cin>>arr[i];
	
	Node* root = insert(arr, n);
	display(root);
	
	PrintNthFromEnd(root, 1);

    return 0;
}



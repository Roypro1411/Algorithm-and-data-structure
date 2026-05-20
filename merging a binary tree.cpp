#include<iostream>
using namespace std;
struct Node{
	int data;
	int degree;
	Node*child;
	Node*sibling;
};
int main(){
	//creating tree
	Node*t1 = new Node{ 10, 0, NULL,NULL
	};
	Node*t2 = new Node{ 20, 0, NULL, NULL
	};
	Node*t3 = new Node{ 30, 0, NULL, NULL
	};
	//merge t1 and t2
	Node*root;
	if(t1 -> data < t2 -> data){
		root = t1;
		t2 -> sibling = t1 -> child;
		t1 -> child >= t2;
		t1 -> degree++;
	}
	else{
		root = t2;
		t1 -> sibling = t2 -> child;
		t2 -> child = t1;
		t2 -> degree++;
	}
	// merging result withe t3
	if(root -> data< t3 -> data){
		t3 -> sibling = root -> child;
		root -> child = t3;
		root -> degree++;
	}
	else{
		t3 -> sibling = root ->child;
		t3 -> child = root;
		root = t3;
		root -> degree;
	}
	// display structure
	cout<<"binomial tree with (degree 2): "<<endl;
	cout<<"root: "<<root -> data<<endl;
	cout<<" children of root: ";
	Node*temp = root -> child;
	while(temp != NULL){
		cout<<temp -> data<<" ";
		temp = temp -> sibling;
	}
	cout<<endl;
	cout<<"degree of root: "<<root -> degree<<endl;
	return 0;
}
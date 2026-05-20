#include<iostream>

using namespace std;

struct Node{
	int data;
	Node*left;
	Node*right;
};
int main(){
	//creating nodes
	Node*root = new Node{5, NULL, NULL
	};
	Node*node3 = new Node{3, NULL, NULL
	};
	Node*node7 = new Node{7, NULL, NULL
	};
	Node*node2 = new Node{2, NULL, NULL
	};
	Node*node4 = new Node{4, NULL, NULL
	};
	Node*node6 = new Node{6, NULL, NULL
	};
	Node*node8 = new Node{8, NULL, NULL
	};
	
	// building tree
	root->left = node3;
	root->right = node7;
	node3->left = node2;
	node3->right = node4;
	node7->left = node6;
	node8->right = node8;
	
	int choice;
	do{
		//creating menu
		cout<<"\n =========================="<<endl;
		cout<<" choose any number "<<endl;
		cout<<"1.search a key: "<<endl;
		cout<<"2. perform insertion: "<<endl;
		cout<<"3.find maximum key: "<<endl;
		cout<<"4. find minimum key: "<<endl;
		cout<<"5. exit program: "<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"enter your choice (1 - 6)"<<endl;
		cin>>choice;
		cin.ignore();
		
		switch(choice){
			case 1:{
				//for searching
				int key;
				cout<<"enter the key to search for: ";
				cin>>key;
				Node*current = root;
				bool found = false;
				while(current != NULL){
					if(key == current -> data){
						found = true;
						break;
						}
						else if(key < current -> data){
							current = current -> left;
						}
						else{
							current = current -> right;
						}
				}
				// output
				if(found){
					cout<<" key "<<key<<" has been found: "<<endl;
				}
				else{
					cout<<" key "<< key <<"has not been found: "<<endl;
				}
				break;
			}
				case 2:
					// perform insertion on a bst
					cout<<"bts tree inorder traversal: ";
					cout<< node2 -> data <<" ";
					cout<< node3 -> data <<" ";
					cout<< node4 -> data <<" ";
					cout<< root -> data <<" ";
					cout<< node6 -> data <<" ";
					cout<< node7 -> data <<" ";
					cout<< node8 -> data <<" "<<endl;
					break;
					
					case 3:{
						
						// to ditermine max key
						Node* current = root;
						while(current -> right != NULL){
							current = current -> right;
						}
						cout<<" maximum key in the bst is: "<<current -> data <<endl;
						break;
					}
						
						
						case 4:{
						
							// to ditermine min key
							Node* current = root;
							while(current -> left != NULL){
								current = current -> left;
							}
							cout<<" minimum key in the bts is: "<< current -> data <<endl;
							break;
					}
				 
							case 5:
							 cout << "Exiting program." << endl;
							  break;
							  default:
							  cout << "Invalid choice!" << endl;
							   break;
        }
    } while (choice != 5); 
    delete root;
    delete node3;
    delete node7;
    delete node2;
    delete node4;
    delete node6;
    delete node8;
	return 0;
}
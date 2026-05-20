#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*left;
	Node*right;
	};
	int main(){
		//creating nodes
		Node*root = new Node{1, NULL,NULL
		};
		Node*node2 = new Node{2, NULL,NULL
		};
		Node*node3 = new Node{3, NULL,NULL
		};
		Node*node4 = new Node{4, NULL,NULL
		};
		Node*node5 = new Node{5, NULL,NULL
		};
		// connecting nodes
		root -> left = node2;
		root -> right = node3;
		node2 -> left = node4;
		node3 -> right = node5;
		
		int choice;
		
		do{
			//the menu
			cout<<"\n==================="<<endl;
			cout<<"\n choose any number "<< endl;
			
			cout<<"1. in order traversal: "<<endl;
			cout<<"2. pre order traversal: "<<endl;
			cout<<"3. post order traversal: "<<endl;
			cout<<"-------------------------"<<endl;
			cout<<"exit program: "<<endl;
			cout<<"enter your choice fron (1 - 3)"<<endl;
			cin>>choice;
			
		switch(choice) {
			case 1:
				//in order traversal moves from left to root then to right
				cout<<node4->data <<" ";
				cout<<node2->data <<" ";
				cout<<node5->data <<" ";
				cout<< root->data <<" ";
				cout<<node3->data <<" ";
				break;
				case 2:
					//pre order travasal moves fron root to left then to the right
					cout<< root->data <<" ";
					cout<< node2->data <<" ";
					cout<< node4->data <<" ";
					cout<< node3->data <<" ";
					cout<< node5->data <<" ";
					break;
					case 3:
						// post order traversal moves from left to right then to root
						cout<< node4->data <<" ";
						cout<< node5->data <<" ";
						cout<< node2->data <<" ";
						cout<< node3->data <<" ";
						cout<< root->data <<" ";
						break;
						case 4:
                cout << "Exiting program." << endl;
                break;
                
            default:
                cout << "Error: Invalid choice!" << endl;
                break;
        }
    }
	 while (choice != 4); 

    // Clean up allocated memory (Good C++ practice!)
    delete root;
    delete node2;
    delete node3;
    delete node4;
    delete node5;

    return 0;
}
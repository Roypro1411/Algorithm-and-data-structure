#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int main() {
    // Creating nodes
    Node* root = new Node{5, NULL, NULL
	};
    Node* node3 = new Node{3, NULL, NULL
	};
    Node* node7 = new Node{7, NULL, NULL
	};
    Node* node2 = new Node{2, NULL, NULL
	};
    Node* node4 = new Node{4, NULL, NULL
	};
    Node* node6 = new Node{6, NULL, NULL
	};
    Node* node8 = new Node{8, NULL, NULL
	};
    
    // Building tree
    root->left = node3;
    root->right = node7;
    node3->left = node2;
    node3->right = node4;
    node7->left = node6;
    node8->right = node8; // 
    
    cout << "Original BST (in order traversal): ";
    cout<<"2,3,4,5,6,7,8"<<endl;
    
    // deleting 3
    int key = 3; 
    
    //  Search for the node 
    Node* parent = NULL;
    Node* current = root;
    
    while (current != NULL && current->data != key) {
        parent = current;
        if (key < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    
    if (current == NULL) {
        cout << "Key " << key << " not found\n";
        return 0;
    }
    // balancing the tree after deleting 
    if (current->left != NULL && current->right != NULL) {
        Node* successorParent = current;
        Node* successor = current->right;
        while (successor->left != NULL) {
            successorParent = successor;
            successor = successor->left;
        }
        
        current->data = successor->data;
        
        parent = successorParent;
        current = successor;
    }
    
    Node* child = NULL;
    if (current->left != NULL) {
        child = current->left;
    } else {
        child = current->right;
    }
    
    if (parent == NULL) {
        root = child;
    } 
    else if (parent->left == current) {
        parent->left = child;
    } else {
        parent->right = child;
    }
    
    delete current;
    cout << "Key " << key << " successfully deleted!\n";

    return 0;
}
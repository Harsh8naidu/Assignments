#include <iostream>

struct Node{

	int data;
	Node* left;
	Node* right;

	Node(int value) : data(value), left(nullptr), right(nullptr) {}

};

class BinarySearchTree {
	
private: 
	
	Node* root = nullptr;

	Node* Insert(Node* node, int value) {

		if (node == nullptr) {

			return new Node(value);

		}

		if (value < node->data) {

			node->left = Insert(node->left, value);

		}
		else if (value > node->data) {

			node->right = Insert(node->right, value);

		}

		return node;
	}

	bool Search(Node* node, int value) const {

		if (node == nullptr) {

			return false;

		}

		if (value == node->data) {

			return true;

		} else if (value < node->data) {

			Search(node->left, value);

		}
		else if (value > node->data) {

			Search(node->right, value);

		}

	}
	
	void PrintTree(Node* node) const {

		if (node == nullptr) {
			
			return;

		}

		PrintTree(node->left);
		
		std::cout << node->data << ", ";

		PrintTree(node->right);
	}

	void DestroyTree(Node*node) {

		if (node != nullptr) {

			DestroyTree(node->left);

			DestroyTree(node->right);

			delete node;
		}

	}

public:

	// Constructor initializing the BinarySearchTree
	BinarySearchTree() : root(nullptr) {}

	void Insert(int value) {

		root = Insert(root, value);

	}

	bool Search(int value) const {
		
		return Search(root, value);

	}

	void PrintTree() const {

		PrintTree(root);
		std::cout << std::endl;

	}

	// Destructor to delete the tree
	~BinarySearchTree() {

		DestroyTree(root);

	}
};

void ObjectsAndClasses() {

	BinarySearchTree bst;

	bst.Insert(10);
	bst.Insert(5);
	bst.Insert(15);
	bst.Insert(3);
	bst.Insert(7);
	bst.Insert(13);
	bst.Insert(17);


	// Print the tree

	std::cout << "In-order traversal of the tree: ";
	bst.PrintTree();

	// Search for values in the tree

	int value = 4;

	std::cout << "Searching for value " << value << ": " << (bst.Search(value)) ? "Found" : "Not Found";

	std::cout << std::endl;

	value = 17;

	std::cout << "Searching for value " << value << ": " << (bst.Search(value)) ? "Found" : "Not Found";

}
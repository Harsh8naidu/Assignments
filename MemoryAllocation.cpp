#include <iostream>
#include <string>
#include <vector>

int StackOverflowFunc() {

	// Answer 1

	/* 
		A "Stack Overflow" is when the code as used up more memory for the stack than your program was supposed to. This usually happens when recursive function overwrites memory outside the stack. If you call a function once and you recall it again
	    from another function, then this may result in a continuous loop until the computer decides the computer recognized that the stack is overblown. In simple words, we can also call it infinite recursion. 
	*/


	   // We can create a stack overflow without recursion by just creating a large array on the stack continously until it blows the stack

	while (true) {

		char largeArray[1000000];

		std::cout << "Dynamically assigning a large array on stack" << std::endl;
	}

	return 0;
}

void MemoryLeakFunc() {

	// Answer 2

	/*
		Memory Leaks are associated with "Dynamically Allocated Memory" stored on the heap. We must deallocate the memory by using the delete keyword as it ensures that space is usable and does not cause memory inefficiency or crashes.
	*/

	//We can create a memory leak without using heap by calling a recursive function or by not deallocation an integer or an array that is stored on the heap

	MemoryLeakFunc();

}

int NewAndDeleteFunc() {

	// Answer 3

	int* arr = new int[10];

	for (int i = 0; i < 10; i++) {

		arr[i] = i + 1;
	}

	// Yes, it is possible to delete the integer in one go. No, it is not necessary to delete each integer.

	delete[] arr;

	int a = 1;
	int b = 2;
	int c = 3;

	int** heapPointers = new int*[3];

	heapPointers[0] = &a;
	heapPointers[1] = &b;
	heapPointers[2] = &c;

	/*
		When the values are stored on the stack while their references are stored on the heap.You get the memory location of those values on the stack.This is also why it is important to deallocate the references,
		otherwise they would be pointing to an invalid memory location on the stack, if the values are deleted or moved.
	*/ 
	

	std::cout << "Values via heap pointers: " << heapPointers[0] << " , " << heapPointers[1] << " , " << heapPointers[2];

	delete[] heapPointers;

	return 0;
}

struct node {

	int value;
	struct node* left;
	struct node* right;

};

struct node* root = NULL;

void insert_integer(struct node** tree, int value) {
	
	if (*tree == NULL) {

		struct node* new_node = new node;
		new_node->value = value;
		new_node->left = NULL;
		new_node->right = NULL;

		*tree = new_node;
		return;
	}

	// Otherwise recur down the tree

	if (value < (*tree)->value) {
		insert_integer(&((*tree)->left), value);
	}
	else {
		insert_integer(&((*tree)->right), value);
	}

}

void print_tree(struct node* tree) {

	if (tree == nullptr) 
		return;

	// Recur on left side
	print_tree(tree->left);

	std::cout << tree->value << " , ";

	// Recur on right side
	print_tree(tree->right);

}

void terminate_tree(struct node* tree) {

	if (tree == nullptr)
		return;

	terminate_tree(tree->left);

	terminate_tree(tree->right);

	delete tree;

}

int most_common_integer(struct node* tree) {

	int count = 0;

	if (tree == nullptr)
		return -1;

	most_common_integer(tree->left);

	if (tree->left == NULL && tree->right == NULL) {

		count++;

	}

	most_common_integer(tree->right);

	return count;

}

int largest_integer(struct node* tree) {

	if (tree == nullptr)
		return -1;

	node* current = tree;

	while (current->right != NULL) {
		
		current = current->right;

	}

	return current->value;

}

int sum_of_all_integers(struct node* tree) {

	if (tree == nullptr) {
		return 0;
	}

	return tree->value + sum_of_all_integers(tree->left) + sum_of_all_integers(tree->right);

}

int BinarySearchTree() {
	struct node* root = NULL;

	// Insert integers into the BST
	insert_integer(&root, 10);
	insert_integer(&root, 5);
	insert_integer(&root, 20);
	insert_integer(&root, 3);
	insert_integer(&root, 7);
	insert_integer(&root, 15);
	insert_integer(&root, 30);

	// Print the BST
	std::cout << "BST in-order: ";
	print_tree(root);
	std::cout << std::endl;

	// Find and print the largest integer
	std::cout << "Largest integer in the BST: " << largest_integer(root) << std::endl;

	// Find and print the sum of all integers
	std::cout << "Sum of all integers in the BST: " << sum_of_all_integers(root) << std::endl;

	std::cout << "\n";

	std::cout << "Terminating the tree... "<< std::endl;

	// Terminate the BST
	terminate_tree(root);

	return 0;
}


int MemoryAllocation() {

	StackOverflowFunc();

	MemoryLeakFunc();

	NewAndDeleteFunc();

	BinarySearchTree();

	return 0;
}


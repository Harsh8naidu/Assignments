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

// implement the functions described by these headers

void insert_integer(struct node** tree, int value);

void print_tree(struct node* tree);

void terminate_tree(struct node* tree);

int most_common_integer(struct node* tree);

int largest_integer(struct node* tree);

int summ_of_all_integers(struct node* tree);

int BinarySearchTree() {

	

	return 0;

}

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


int MemoryAllocation() {

	//StackOverflowFunc();

	//MemoryLeakFunc();

	NewAndDeleteFunc();

	return 0;
}


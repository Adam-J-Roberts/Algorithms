#include "splay.h"
#include <iostream>

int main(int argc, char* argv[])
{
	splay* root = NULL;
	KEY_TYPE vector[] = {9,8,7,6,5,4,3,2,1,0};
//	int vector[] = {15};
	const int length = sizeof(vector)/sizeof(int);
	int i;
	for(i = 0; i< length;i++)
		root = Insert(vector[i], root);
	
	std::cout<<"\nInOrder: \n";
	InOrder(root);

	KEY_TYPE input;
	char type;
		


	root = Insert(10, root);
	//root = Insert(9, root);
	//root = Insert(8, root);
	//root = Insert(7, root);
	//root = Insert(6, root);
	//root = Insert(5, root);
	//root = Insert(4, root);
	//root = Insert(3, root);
	//root = Insert(2, root);
	//root = Insert(1, root);
	
	std::cout<<"\nAfter Insert: "<<input<<std::endl;

	
	std::cout<<"\n";
	return 0;
}

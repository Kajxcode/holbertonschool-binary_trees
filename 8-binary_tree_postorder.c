#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
*binary_tree_postorder - Prints a binary tree using post-order traversal
*@tree: Pointer to the root node of the tree to traverse
*@func: Function to call for each node
*Return: N/A
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}

}

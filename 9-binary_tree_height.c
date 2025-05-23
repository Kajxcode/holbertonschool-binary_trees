#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Node to measure
* Return: The height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

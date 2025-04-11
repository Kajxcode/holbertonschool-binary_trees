#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_size - Function to calculate the size of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Size of the tree (number of nodes)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

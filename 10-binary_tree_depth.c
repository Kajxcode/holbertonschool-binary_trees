#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
* binary_tree_depth - Measures the depth of a binary tree
* @tree: Node to measure
* Return: The depth of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current = tree;

	while (current && current->parent)
	{
		depth++;
		current = current->parent;
	}
	return (depth);
}

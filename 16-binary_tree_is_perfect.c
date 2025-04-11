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
	const binary_tree_t* current = tree;

	while (current && current->parent)
	{
		depth++;
		current = current->parent;
	}
	return (depth);
}

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Node to measure
* Return: The height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
* is_perfect - Function if the tree is perfect
* @tree: Tree
* @height: Height of the tree
* Return: Integer
*/
int is_perfect(const binary_tree_t *tree, int height)
{
	int depth = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		depth = binary_tree_depth(tree);
		if (depth == height)
			return (1);
		return (0);
	}

	return (is_perfect(tree->left, height) && is_perfect(tree->right, height));
}

/**
* binary_tree_is_perfect - Function that checks if a binary tree is perfect
* @tree: Tree
* Return: integer
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);

	return (is_perfect(tree, height));
}

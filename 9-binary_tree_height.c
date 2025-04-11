#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Node to measure
* Return: The height of the tree
*/
int binary_tree_height(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (1 + (left_height > right_height ? left_height : right_height));
}

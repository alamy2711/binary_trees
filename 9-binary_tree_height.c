#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (MAX(leftHeight, rightHeight) + 1);
}

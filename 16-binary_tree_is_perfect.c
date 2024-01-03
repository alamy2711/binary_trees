#include "binary_trees.h"

/**
 * binaryTreeHeight - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
size_t binaryTreeHeight(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binaryTreeHeight(tree->left);
	rightHeight = binaryTreeHeight(tree->right);

	return (MAX(leftHeight, rightHeight) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binaryTreeHeight(tree->left) == binaryTreeHeight(tree->right))
		return (1);

	return (0);
}

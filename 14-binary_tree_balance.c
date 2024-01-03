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
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The measured balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binaryTreeHeight(tree->left) - binaryTreeHeight(tree->right));
}

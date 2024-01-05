#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

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

/**
 * checker - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree
 * @size: Size of the tree
 * @count: Nodes counter
 * @level: Current level
 * @check: Check result
 */
void checker(binary_tree_t *tree, int size, int *count, int level, int *check)
{
	if (!tree)
	{
		if (*count != size)
			*check = 0;
		return;
	}

	if (level == 0)
		(*count)++;

	if (level > 0)
	{
		checker(tree->left, size, count, level - 1, check);
		checker(tree->right, size, count, level - 1, check);
	}
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size, count = 0, i, check = 1;
	int height;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
	{
		checker((binary_tree_t *)tree, size, &count, i, &check);
		if (check == 0)
			break;
	}

	return (check);
}

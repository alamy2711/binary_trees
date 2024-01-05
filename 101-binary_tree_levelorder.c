#include "binary_trees.h"

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

/**
 * print_given_level - Prints nodes at a given level
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call for each node
 * @level: Current level
 */
void print_given_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (!tree || !func)
		return;

	if (level == 0)
		func(tree->n);

	if (level > 0)
	{
		print_given_level(tree->left, func, level - 1);
		print_given_level(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - Goes through a binary tree using
 * level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
		print_given_level(tree, func, i);
}

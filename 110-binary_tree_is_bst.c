#include "binary_trees.h"

/**
 * is_bst_util - Helper function to recursively check if a binary tree is a BST
 * @tree: Pointer to the current node
 * @min: Pointer to the minimum allowed value for the current node
 * @max: Pointer to the maximum allowed value for the current node
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int is_bst_util(const binary_tree_t *tree, const binary_tree_t *min,
				const binary_tree_t *max)
{
	if (tree == NULL)
		return (1);

	if ((min && tree->n <= min->n) || (max && tree->n >= max->n))
		return (0);

	return ((is_bst_util(tree->left, min, tree) &&
			is_bst_util(tree->right, tree, max)));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_util(tree, NULL, NULL));
}

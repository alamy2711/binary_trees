#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 * @tree: Double pointer to the root node of the BST to insert the value
 * @value: Value to store in the node to be inserted
 *
 * Return: Pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	binary_tree_t *newNode, *tmp, *parent;

	if (tree == NULL)
		return (NULL);

	newNode = binary_tree_node(NULL, value);
	if (newNode == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = newNode;
		return (newNode);
	}

	tmp = *tree;
	while (tmp)
	{
		parent = tmp;
		if (value == tmp->n)
			return (*tree);
		else if (value < tmp->n)
			tmp = tmp->left;
		else
			tmp = tmp->right;
	}

	newNode->parent = parent;
	if (value < parent->n)
		parent->left = newNode;
	else
		parent->right = newNode;

	return (newNode);
}

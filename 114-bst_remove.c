#include "binary_trees.h"

/**
 * find_successor - Find the in-order successor of a node
 * @node: Node to find the successor for
 * Return: In-order successor
 */
bst_t *find_successor(bst_t *node)
{
	while (node->left)
		node = node->left;
	return (node);
}

/**
 * bst_remove - Removes a node from a Binary Search Tree
 * @root: pointer to the root node of the tree where you will remove a node
 * @value: value to remove in the tree
 *
 * Return: pointer to the new root node of the tree after removing
 * the desired value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *successor, *temp;

	if (root == NULL)
		return (NULL);

	if (root->n > value)
		root->left = bst_remove(root->left, value);
	else if (root->n < value)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left != NULL && root->right != NULL)
		{
			successor = find_successor(root->right);
			root->n = successor->n;
			root->right = bst_remove(root->right, successor->n);
		}
		else
		{
			temp = root;

			if (!root->left)
				root = root->right;
			else if (!root->right)
				root = root->left;

			if (root)
				root->parent = temp->parent;

			free(temp);
		}
	}
	return (root);
}

#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first == second || first == second->parent)
		return ((binary_tree_t *)first);

	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);

	if (first->parent == second)
		return ((binary_tree_t *)second);

	if (binary_trees_ancestor(first, second->parent))
		return (binary_trees_ancestor(first, second->parent));

	return (binary_trees_ancestor(first->parent, second));
}

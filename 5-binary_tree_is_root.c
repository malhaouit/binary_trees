#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 * @node: The node to check.
 *
 * Return: 1 if the node is a root, otherwise 0 if it isn't a root or
 * the node is null.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}

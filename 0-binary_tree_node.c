#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new Node in the binary tree.
 * @parent: A pointer to the parent Node of the node to create.
 * @value: The value to put in the new Node.
 *
 * Return: The new Node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (root == NULL)
		return (NULL);

	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;

	return (root);
}

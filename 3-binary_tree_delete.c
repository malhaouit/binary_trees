#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: The binary tree to delete.
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	free(tree->left->right);
	free(tree->left);
	free(tree->right->right);
	free(tree->right);
	free(tree);
}

#include "binary_trees.h"

/**
 * depth - Calculates the depth of the tree by following the left child.
 * @root: A pointer to the root node.
 *
 * Return: The depth.
 */
int depth(const binary_tree_t *root)
{
	int d = 0;

	while (root != NULL)
	{
		d++;
		root = root->left;
	}

	return (d);
}

/**
 * is_perfect - Checks if all leaf nodes are at the same depth and all
 * internal nodes have two children.
 * @tree: A pointer to the root node.
 * @d: The depth of a node.
 * @level: The level of a node.
 *
 * Return: 1 if the binary tree is perfect, or 0 if not.
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Calculates the depth and calls is_perfect function.
 * @tree: A pointer to the root node.
 *
 * Return: 1 if the binary tree is perfect, or 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

	return (is_perfect(tree, d, 0));
}

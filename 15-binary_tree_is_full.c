#include "binary_trees.h"

/**
 * binary_tree_is_full - say if a tree are ful
 *
 * @tree: tree to review
 * Return: 0 if not full or frailure or 1 if are full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (!tree)
		return (0);

	if (tree->left && !(tree->right))
		return (0);

	if (tree->right && !(tree->left))
		return (0);

	if (tree->left)
		full *= binary_tree_is_full(tree->left);
	if (tree->right)
		full *= binary_tree_is_full(tree->right);

	return (full);
}

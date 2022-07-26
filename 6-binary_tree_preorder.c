#include "binary_trees.h"

/**
 * binary_tree_preorder - print the order of the tree of right at left
 *
 * @tree: pointer to root
 * @func: pointer to function to call for each node
 * The value in the node must be passed as a parameter to this function.
 * Return: none
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree) || !(func))
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

#include "binary_trees.h"

/**
 * binary_tree_inorder - print the binary tree in order
 *
 * @tree: pointer to root
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * Return: none
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree) || !(func))
		return;

	binary_tree_inorder(tree->left, func);
	func (tree->n);
	binary_tree_inorder(tree->right, func);
}

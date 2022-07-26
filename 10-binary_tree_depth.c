#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: node to review
 * Return: depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	if (!(tree))
		return (0);

	for(count = 0; tree->parent; count++)
		tree = tree->parent;

	return (count);
}

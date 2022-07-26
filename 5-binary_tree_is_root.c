#include "binary_trees.h"

/**
 * binary_tree_is_root - review if a node given is the root
 *
 * @node: pointer to position to review
 * Return: 0 if not is root, 1 if are root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node in the right position of parent
 *
 * @parent: node position of parent
 * @value: data to insert
 * Return: right new node or 0 on frailure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (!parent)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (!right_node)
		return (NULL);

	if (parent->right)
	{
		right_node->right = parent->right;
		right_node->right->parent = right_node;
	}
	parent->right = right_node;

	return (right_node);
}

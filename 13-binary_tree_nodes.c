#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to root
 * Return: nodes with at least 1 child in a binary tree, 0 on frailure
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if(!tree)
		return (0);

	if(!tree->parent)
		count++;
	if(tree->right)
		count++;
	if(tree->left)
		count++;

	return (count);	  
}
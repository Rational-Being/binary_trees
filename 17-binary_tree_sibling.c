#include "binary_trees.h"

/**
 * binaary_tree_sibling - finds the sibling of a node
 * @node: the node to find
 * Return: pointer ot the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
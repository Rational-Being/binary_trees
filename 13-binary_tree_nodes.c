#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with leaves in a binary tree
 * @tree: pointer to the root node
 * Return: 0 if tree is null, otherwise return node count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right);
		if (nodes)
			return (1);
		else
			return (0);

		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}

	return (nodes);
}


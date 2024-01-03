#include "binary_trees.h"

/**
 * binary_tree_height - function that measure the height of a binary tree
 * @tree: pointer to the root node
 * Return: null else returns height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree)
	{
		if (tree->left)
			l_height += 1 + binary_tree_height(tree->left);
		if (tree->right)
			r_height += 1 + binary_tree_height(tree->right);

		if (l_height > r_height)
			return (l_height);
		else
			return (r_height);
	}
	return (0);
}


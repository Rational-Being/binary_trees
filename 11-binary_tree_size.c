#include "binary_trees.h"

/**
 * binary_tree_size - fuctions returns the size of a binary tree
 * @tree: binary tree
 * Return: 0 if tree is null othewise depth
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	else
		return (0);
}

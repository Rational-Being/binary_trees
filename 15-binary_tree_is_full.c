#include "binary_trees.h"

/**
 * binary_tree_is_full - checks recursively of a binary tree is full
 * @tree: pointer to the root of the node of the tree
 * Return: 0, otherwise 1 if tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}

#include "binary_trees.h"

/** 
 * binary_tree_depth - fuctions returns the depth of a binary tree
 * @tree: binary tree
 * Return: 0 if tree is null othewise depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}

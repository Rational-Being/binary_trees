#include "binary_trees.h"

/**
 * binary_tree_inorder - inorder tranvesal
 * @tree: tree to transverse
 * @func: pointer to a fucntion to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

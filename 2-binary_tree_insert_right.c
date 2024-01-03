#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child of another in the tree
 * @parent: pointer to thenode to insert the right child
 * @value: value to store in the new node
 *
 * Return: returns null otherwise a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = parent->right;
	new_node->left = NULL;

	parent->right = new_node;

	if (new_node->right)
		new_node->right->parent = new_node;
	return (new_node);
}

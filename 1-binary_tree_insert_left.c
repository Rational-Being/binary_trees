#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child of another in the tree
 * @parent: pointer to thenode to insert the left child
 * @value: value to store in the new node
 *
 * Return: returns null otherwise a pointer to the new node 
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = parent->left;
	new_node->right = NULL;

	parent->left = new_node;

	if (new_node->left)
		new_node->left->parent = new_node;
	return (new_node);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right child
 * @parent: pointer to the node to insert the right-child in
 * @value: data to store in the new node
 *
 * Return: return a pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right;

	if (parent == NULL)
		return (NULL);

	new_node_right = binary_tree_node(parent, value);
	if (parent->right == NULL)
		parent->right = new_node_right;
	else
	{
		new_node_right->right = parent->right;
		new_node_right->right->parent = new_node_right;
		parent->right = new_node_right;
	}
	return (new_node_right);
}

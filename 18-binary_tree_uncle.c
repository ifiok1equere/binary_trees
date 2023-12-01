#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds uncle of a node in a binary tree
 * @node: node whose uncle is being found.
 *
 * Return: pointer to node's uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
		return (NULL);

	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}

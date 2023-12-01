#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a tree node
 * @tree: pointer to tree
 *
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *ptr;
	size_t depth = 0;

	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	ptr = tree;
	while (ptr->parent != NULL)
	{
		ptr = ptr->parent;
		depth++;
	}
	return (depth);
}

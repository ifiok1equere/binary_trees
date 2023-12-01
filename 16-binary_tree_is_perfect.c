#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: return 1 for perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);


	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}

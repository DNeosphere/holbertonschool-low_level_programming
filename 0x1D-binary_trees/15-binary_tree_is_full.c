#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Binary tree
 * Return: 0 if not full, 1 it is
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_t = 0, rigth_t = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		left_t = binary_tree_is_full(tree->left);
	if (tree->right)
		rigth_t = binary_tree_is_full(tree->right);

	if (left_t == 0 && rigth_t == 0)
		return (0);
	else if ((left_t == 1 && rigth_t == 0) || (left_t == 0 && rigth_t == 1))
		return (0);
	else
		return (1);
}

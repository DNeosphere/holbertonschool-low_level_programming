#include "binary_trees.h"
/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: pointer to the root
 * Return: number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_b = 0;
	size_t right_b = 0;

	if (tree == NULL)
		return (0);

	left_b = binary_tree_size(tree->left);
	right_b = binary_tree_size(tree->right);

	return (left_b + right_b + 1);
}

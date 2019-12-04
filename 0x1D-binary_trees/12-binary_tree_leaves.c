#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaves in a b tree
 * @tree: pointer to the root node
 * Return: amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_t = 0, right_t = 0;


	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (tree->left)
			left_t = binary_tree_leaves(tree->left);
		if (tree->right)
			right_t = binary_tree_leaves(tree->right);
		return (left_t + right_t);
	}
	else
		return (0);
}

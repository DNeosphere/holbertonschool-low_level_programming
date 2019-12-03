#include "binary_trees.h"
/**
 * binary_tree_depth - finds the depth of a tree
 * @tree: pointer to the tree
 * Return: integer with the measure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree != NULL)
	{
		if (tree->parent == NULL)
			return (0);
		return (binary_tree_depth(tree->parent) + 1);
	}
	else
		return (0);
}

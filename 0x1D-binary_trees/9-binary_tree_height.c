#include "binary_trees.h"
/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: Unsigned int with the size of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
		return (0);

	res = find_height(tree);
	return ((size_t) res);
}
/**
 * find_height - finds height
 * @tree: pointer to the root of a tree
 * Return: height of the tree
 */
int find_height(const binary_tree_t *tree)
{

	int l_height = 0;
	int r_height = 0;

	if (tree == NULL)
		return (-1);

	l_height = find_height(tree->left);
	r_height = find_height(tree->right);

	return ((l_height > r_height ? l_height : r_height) + 1);

}

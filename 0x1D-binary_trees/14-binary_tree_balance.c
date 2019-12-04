#include "binary_trees.h"
/**
 * binary_tree_balance - calculates balance of a tree
 * @tree: pointer to the root
 * Return: integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_r = 0, height_l = 0;

	if (tree == NULL)
		return (0);

	height_r = find_height(tree->right);
	height_l = find_height(tree->left);
	return (height_l - height_r);
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

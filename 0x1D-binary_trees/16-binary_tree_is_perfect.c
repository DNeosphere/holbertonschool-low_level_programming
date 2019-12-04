#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);

	height_r = find_height(tree->right);
	height_l = find_height(tree->left);


	if (binary_tree_is_full(tree) && height_r == height_l)
	{
		if (tree->left)
			return (binary_tree_is_perfect(tree->right) * 1 *
				binary_tree_is_perfect(tree->left));
		return (1);
	}
	return (0);


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

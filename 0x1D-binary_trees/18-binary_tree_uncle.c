#include "binary_trees.h"

/**
 * *binary_tree_sibling - Finds the sibling of a node
 * @node: Node to check
 * Return: Node's sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	};

	return (NULL);
}

/**
 * *binary_tree_uncle - Finds the uncle of a node
 * @node: Node
 * Return: If not Uncle, it has Uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (binary_tree_sibling(node->parent) == NULL)
		return (NULL);
	else
		return (binary_tree_sibling(node->parent));

}

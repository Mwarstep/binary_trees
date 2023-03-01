#include "binary_trees.c"

/**
 * binary_tree_is_leaf - Will check if a node is a leaf
 * @node: The node to check
 *
 * Return: 1 if node is Lead, 0 if not and 0 if NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}

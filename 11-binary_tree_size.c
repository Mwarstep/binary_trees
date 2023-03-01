#include "binary_trees.h"

/**
 * binary_tree_size - Will measure the size of a binary tree
 * @tree: The tree to measure the size of
 *
 * Return: The size of tree, otherwise 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

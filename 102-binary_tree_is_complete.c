#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of tree to check
 *
 * Return: 1 if tree is complete, 0 if not and if NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}

/**
 * btic_helper - will check if a binary tree is complete
 * @tree: Pointer to the root node of tree to check
 * @index: The node index to check
 * @size: The number of nodes in the tree
 *
 * Return: 1 if tree is complete, 0 if not or if NULL
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - will measure the size of a binary tree
 * @tree: The tree to measure the size of
 *
 * Return: Size of tree, otherwise 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
}

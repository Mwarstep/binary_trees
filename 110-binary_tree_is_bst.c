#include "binary_trees.h"

/**
 * binary_tree_is_bst - will check if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - will check ig a binary tee is a valid BST
 * @tree: Pointer to the root node of the tree to check
 * @min: Lower bound of checked nodes
 * @max: Upper bound of cheked nodes
 *
 * Return: 1 if tree is valid BST, otherwise 0
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
			btib_helper(tree->right, tree->n + 1, max));
}

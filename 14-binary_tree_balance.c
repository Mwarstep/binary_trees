#include "binary_trees.h"

/**
 * binary_tree_balance - Will measure the balance factor of a binary tree
 * @tree: The pointer to the root node of the tree to measure the balance
 * factor
 *
 * Return: The balance factor, otherwise 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_r = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (height_l - height_r);

}

/**
 * binary_tree_height - Will measure the height of a binary tree
 * @tree: The tree to measure the height of
 *
 * Return: The height of tree, otherwise 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

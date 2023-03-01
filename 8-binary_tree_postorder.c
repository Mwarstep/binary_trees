#include "binary_trees.h"

/**
 * binary_tree_postorder - Will go through a binary tree using postorder
 * traverse
 * @tree: The tree to traverse
 * @func: The pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

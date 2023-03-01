#include "binary_trees.h"

/**
 * binary_tree_depth - will measure the depth of a node in a binary tree
 * @tree: The node to calculate the depth of
 *
 * Return: Depth of the node, otherwise 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

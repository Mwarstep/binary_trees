#include "binary_trees.h"

/**
 * binary_tree_sibling - Will find the sibling of a node
 * @node: The pointer to the node to find sibling
 *
 * Return: Pointer to sibling node, NULL if node is NULL,
 * NULL if parent is NULL and NULL if node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}

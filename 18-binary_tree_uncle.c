#include "binary_trees.h"

/**
 * binary_tree_uncle - Will find the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to uncle node, NULL if node is NULL, NULL
 * if parent is NULL and NULL if the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Will find the sibling of a node
 * @node: Pointer to node to find sibling
 *
 * Return: Pointer to the sibling node, NULL if node is NULL, NULL
 * if parent is NULL and NULL if node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}

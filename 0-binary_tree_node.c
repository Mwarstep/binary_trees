#include "binary_trees.h"

/**
 * binary_tree_node - Will create a binary tree node
 * @parent: The pointer to parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: Pointer to new node otherwise NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

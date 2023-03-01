#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node a the left-child of another node
 * @parent: The pointer to node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to new node, NULL on failure and NULL if
 * parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}

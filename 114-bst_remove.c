#include "binary_trees.h"

/**
 * bst_remove - Will remove a node from a BST
 * @root: Pointer to the node of the tree where a node will be removed
 * @value: The value to remove in the tree
 *
 * Return: Pointer to the new root node of tree post-removal, otherwise
 * NULL
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp = NULL;

	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			tmp = root->right;
			free(root);
			return (tmp);
		}
		else if (!root->right)
		{
			tmp = root->left;
			free(root);
			return (tmp);
		}
		tmp = bst_min_val(root->right);
		root->n = tmp->n;
		root->right = bst_remove(root->right, tmp->n);
	}
	return (root);
}

/**
 * bst_min_val - Will find the smallest node from a BST
 * @root: Pointer to the root node of the tree
 *
 * Return: Pointer to the smallest node
 */
bst_t *bst_min_val(bst_t *root)
{
	bst_t *min = root;

	while (min->left)
		min = min->left;

	return (min);
}

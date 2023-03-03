#include "binary_trees.h"

/**
 * array_to_bst - will build a BST from an array
 * @array: The pointer to the first element of the array to be converted
 * @size: The number of elements in the array
 *
 * Return: Pointer to the root node of created BST, otherwise NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}

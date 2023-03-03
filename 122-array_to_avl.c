#include "binary_trees.h"

/**
 * array_to_avl - Will build an avl tree from an array
 * @array: The array to create from
 * @size: The size of the array
 *
 * Return: Pointer to the root node of created avl tree, otherwis NULL
 */
avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int i;
	avl_t *root = NULL;

	for (i = 0; i < size; i++)
		avl_insert(&root, array[i]);

	return (root);
}

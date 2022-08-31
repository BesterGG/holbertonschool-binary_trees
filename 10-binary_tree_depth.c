#include "binary_trees.h"
/**
 * binary_tree_depth - calculate the depth of the tree
 * @tree: pointer to root of tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;
	const binary_tree_t *aux = tree;

	if (!tree)
		return (0);
	while (aux->parent)
	{
		count++;
		aux = aux->parent;
	}
	return (count);
}

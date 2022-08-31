#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of tree
 * @tree: pointer to root of tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (size_tree(tree));
}
/**
 * size_tree - function that measures the size of tree
 * @tree: pointer to root of tree
 * Return: size
 */
int size_tree(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (size_tree(tree->left) + 1 + size_tree(tree->right));
}

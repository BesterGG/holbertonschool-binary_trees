#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root of tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
/**
 * binary_tree_height - calculate the height of the tree
 * @tree: pointer to root of tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (maxdeep(tree));
}
/**
 * maxdeep - auxiliar function to calculate height of tree
 * @tree: pointer to root of tree
 * Return: height of tree
 */
int maxdeep(const binary_tree_t *tree)
{
	int lDepth = 0, rDepth = 0;

	if (tree == NULL)
	{
		return (0);
	}
		lDepth = maxdeep(tree->left);
		rDepth = maxdeep(tree->right);
		if (lDepth > rDepth)
			return (lDepth + 1);
		else
			return (rDepth + 1);
}

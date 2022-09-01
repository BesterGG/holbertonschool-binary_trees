#include "binary_trees.h"
/**
 * binary_tree_is_full - check binary tree
 * @tree: pointer to root of binary tree
 * Return: node otherwise null
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_full_tree(tree));
}
/**
 * is_full_tree - recursive function check if tree is full
 * @tree: pointer to root of binary tree
 * Return: 1 if tree is full, otherwise 0
 */
int is_full_tree(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
		return (1);
	if ((tree->left) && (tree->right))
		return (is_full_tree(tree->left) && is_full_tree(tree->right));
	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if tree is leaf
 * @node: node to check if tree is leaf
 * Return: 1 if its leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}

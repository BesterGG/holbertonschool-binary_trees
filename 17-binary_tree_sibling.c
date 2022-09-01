#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_sibling - sibling
 * @node: pointer to node
 * Return: sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if  (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
	return (NULL);
}

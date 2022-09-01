#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with childs
 * @tree: pointer to root of tree
 * Return: count of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_height - calculate the height of the tree
 * @tree: pointer to root of tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lDepth = 0, rDepth = 0;

	if (tree == NULL)
	{
		return (-1);
	}
		lDepth = binary_tree_height(tree->left);
		rDepth = binary_tree_height(tree->right);
		if (lDepth > rDepth)
			return ((size_t)lDepth + 1);
		else
			return ((size_t)rDepth + 1);
}

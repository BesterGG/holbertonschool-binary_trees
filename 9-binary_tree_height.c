#include "binary_trees.h"
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
int maxdeep(const binary_tree_t *tree)
{
	int lDepth = 0, rDepth = 0;

	if (tree == NULL)
	{
		return (-1);
	}
		lDepth = maxdeep(tree->left);
		rDepth = maxdeep(tree->right);
		if (lDepth > rDepth)
			return (lDepth + 1);
		else
			return (rDepth + 1);
}

#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lDepth = 0, rDepth = 0;
	if (!tree)
		return (0);
	else
	{
		lDepth = maxDepth(node->left);
        rDepth = maxDepth(node->right);
		if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
	}
}
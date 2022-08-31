#include "binary_trees.h"
/**
 * binary_tree_postorder - binary tree postorder print
 * @tree: pointer to root
 * @func: function print num
 * Return: Void function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

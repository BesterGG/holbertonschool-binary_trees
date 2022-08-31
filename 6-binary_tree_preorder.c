#include "binary_trees.h"
/**
 * binary_tree_preorder - print numbers of tree preorder
 * @tree: pointer to root of tree
 * @func: function to print numbers of tree
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}

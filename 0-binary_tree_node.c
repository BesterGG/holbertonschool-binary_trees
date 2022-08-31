#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree
 * @parent: parent of new node
 * @value: value of node
 * Return: node otherwise null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(struct binary_tree_s));
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	node->parent = parent;
	return (node);
}

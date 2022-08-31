#include "binary_trees.h"
/**
 * binary_tree_insert_right - binary insert right side
 * @parent: parent of node
 * @value: value
 * Return: node otherwise null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(struct binary_tree_s));
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	node->parent = parent;
	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;
	return (node);
}

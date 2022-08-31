#include "binary_trees.h"
/**
 * binary_tree_insert_left - binary insert left side
 * @parent: parent of node
 * @value: value
 * Return: node otherwise null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(struct binary_tree_s));
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	node->parent = parent;
	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;
	return (node);
}

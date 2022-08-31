#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = NULL;

    node = malloc (sizeof(struct binary_tree_s));
    if (!node)
        return (NULL);
    node->left = NULL;
    node->right = NULL;
    node->n = value;
    node->parent = parent;

    if (!parent)
        return(node);
    else
    {
        if (parent->n < node->n)
        {
            parent->left = node;
            return (node);
        }
        else if (parent->n > node->n)
        {
        parent->right = node;
        return (node);
        }
    }
    return (NULL);
}
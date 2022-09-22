#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node as the right child of another node
 * @parent: parent of node
 * @value: value held in node
 * Return: pointer to new node created or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->parent = parent;
	tmp->n = value;
	tmp->right = parent->right;
	tmp->left = NULL;

	if (parent->right != NULL)
		parent->right->parent = tmp;

	parent->right = tmp;
	return (tmp);
}

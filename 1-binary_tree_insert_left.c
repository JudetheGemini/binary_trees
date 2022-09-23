#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node as the leftchild of another node
 * @parent: parent of node
 * @value: value held in node
 * Return: pointer to new node created or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);

	tmp->parent = parent;
	tmp->n = value;
	tmp->left = parent->left;
	tmp->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = tmp;

	parent->left = tmp;
	return (tmp);
}

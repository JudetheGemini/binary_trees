#include "binary_trees.h"
/**
 * binary_tree_node - create a node in binary tree
 * @parent: parent of node
 * @value: value held in node
 * Return: address of new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}

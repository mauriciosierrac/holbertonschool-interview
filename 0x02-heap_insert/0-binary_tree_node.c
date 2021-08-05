#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: parent node
 * @value: value of the node
 * Return: tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent == NULL)
	{
		newNode->parent = NULL;
		parent = newNode;
		return (parent);
	}
	else
	{
		newNode->parent = parent;
		return (newNode);
	}
}
#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree
 * @parent: A pointer to the parent
 * @value: the value to put
 * Return: If erro - NULL.
 * 	   Otherwise - pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

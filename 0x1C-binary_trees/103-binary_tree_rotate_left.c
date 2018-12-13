#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree)
		return (NULL);
	if (!tree->right)
		return (NULL);

	temp = tree->right;
	temp->parent = tree->parent;
	tree->right = temp->left;
	if (temp->left != NULL)
		temp->left->parent = tree;
	temp->left = tree;
	temp->left->parent = temp;
	return (temp);
}

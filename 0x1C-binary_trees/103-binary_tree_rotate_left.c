#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_is_complete- checks if the binary tree is compleat
 *
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp, *temp2;

	temp = tree->right;
	tree->right = temp->left;
	temp2 = tree->parent;
	temp->parent= temp2;
	tree->right->parent = tree;
	tree->parent = temp;
	temp->right = tree;
	tree = temp;
	return (tree);
}

#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>



/**
 *binary_tree_levelorder- goes throught a binary tree using level-order
 *@tree: the root of the tree
 *@func: the func ran on node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->parent == NULL)
		func(tree->n);
	if (tree->left == NULL && tree->right == NULL)
		return;
	if (tree->left && tree->right)
	{
		func(tree->left->n);
		func(tree->right->n);
		if (tree->left)
			binary_tree_levelorder(tree->left, func);
		if (tree->right)
			binary_tree_levelorder(tree->right, func);
	}
	else
	{
		if(tree->left)
		{
			func(tree->left->n);
			binary_tree_levelorder(tree->left, func);
		}
		else
		{
			func(tree->right->n);
			binary_tree_levelorder(tree->right, func);
		}
	}

}

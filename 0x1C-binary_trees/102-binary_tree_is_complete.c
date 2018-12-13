#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 *binary_tree_height- measures the height of a binary tree
 *@tree: the root of tree to be measured
 *Return: void
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		left = (binary_tree_height(tree->left) + 1);
	}
	if (tree->right != NULL)
	{
		right = (binary_tree_height(tree->right) + 1);
	}
	if (left >= right)
		return (left);
	else
		return (right);
}

/**
 *binary_tree_size- measures the size of the binary tree
 *@tree: the root of the tree
 *Return: the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		count = binary_tree_size(tree->left) + count;
	if (tree->right != NULL)
		count = binary_tree_size(tree->right) + count;
	return (count);
}

/**
 *binary_tree_is_perfect- checks if the binary tree is perfect or not
 *@tree: the root of the tree
 *Return: 1 if perfect 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t out = 1, x = 2, y;

	if (tree == NULL)
		return (0);
	y = binary_tree_height(tree) + 1;

	for (; y > 0; y--)
		out *= x;

	if (out == binary_tree_size(tree) + 1)
		return (1);
	return (0);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 * Return: balance factor or 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_h;
	int left_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	return (left_h - right_h);
}


/**
 *binary_tree_is_complete- checks if the binary tree is compleat
 *@tree: root of tree
 *Return: 1 if compleat 0 if not
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_perfect(tree) == 1)
		return (1);
	if (binary_tree_balance(tree) != 0 && binary_tree_balance(tree) != 1)
		return (0);

	if (binary_tree_balance(tree) == 0 && tree->right == NULL)
		return (1);
	return (binary_tree_balance(tree->left));
}

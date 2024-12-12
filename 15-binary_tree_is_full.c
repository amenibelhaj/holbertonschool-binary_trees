#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 if the tree is full, otherwise 0
 * A binary tree is considered full if every node has either
 * 0 or 2 children. If a node has only 1 child, the tree is
 * not full. The function recursively checks the tree to ensure
 * that all nodes satisfy this condition.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (1);

if ((tree->left && tree->right) || (tree->left == NULL && tree->right == NULL))
{
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

return (0);
}

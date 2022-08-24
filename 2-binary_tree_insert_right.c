#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
<<<<<<< HEAD
 * @parent: pointer to node to insert the right-child in
 * @value: value of new node
 * Return: pointer to new node or NULL on failure
=======
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
>>>>>>> 28012fcb89a0672c117bbb0922faa8c8668d67dc
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

<<<<<<< HEAD
	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
=======
	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
>>>>>>> 28012fcb89a0672c117bbb0922faa8c8668d67dc
		return (NULL);

	new->n = value;
	new->parent = parent;
<<<<<<< HEAD

	if (parent->right == NULL)
	{
		new->left = NULL;
		new->right = NULL;
		parent->right = new;
	}
	else
	{
		new->left = NULL;
		new->right = parent->right;
		parent->right = new;
		new->right->parent = new;
	}

=======
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
>>>>>>> 28012fcb89a0672c117bbb0922faa8c8668d67dc
	return (new);
}
